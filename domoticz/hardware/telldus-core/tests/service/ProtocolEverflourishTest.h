#ifndef PROTOCOLEVERFLOURISHTEST_H
#define PROTOCOLEVERFLOURISHTEST_H

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class ProtocolEverflourishTest : public CPPUNIT_NS :: TestFixture
{
	CPPUNIT_TEST_SUITE (ProtocolEverflourishTest);
	CPPUNIT_TEST (decodeDataTest);
	CPPUNIT_TEST_SUITE_END ();

public:
	void setUp (void);
	void tearDown (void);

protected:
	void decodeDataTest(void);

private:
	class PrivateData;
	PrivateData *d;
};

#endif  // PROTOCOLEVERFLOURISHTEST_H
