#include <cassert>

#include "identifiers-manager/IdentifiersManager.h"

using namespace std;

void givenThreeNodes(DynamicList& list);

int main() {
    IdentifiersManager identifiersManager("test-file");
    identifiersManager.initializeList();

    DynamicList list = identifiersManager.getList();

    givenThreeNodes(list);

    assert(list.findByName("x").getValue() == 15.0f);
    assert(list.findByName("abc").getValue() == 12.098f);
    assert(list.findByName("z").getValue() == -1.23f);

    list.removeByName("abc");

    try {
        list.findByName("abc");
        assert(false == true); // This line shouldn't be run
    } catch (runtime_error& error) {
        string message = error.what();
        assert(message == "Didn't find node with name 'abc'");
    }

    identifiersManager.setList(list);

    return 0;
}

void givenThreeNodes(DynamicList& list) {
    IdentifierNode nodeX("x", 15);
    IdentifierNode nodeAbc("abc", 12.098);
    IdentifierNode nodeZ("z", -1.23);

    list.insert(nodeX);
    list.insert(nodeAbc);
    list.insert(nodeZ);
}
