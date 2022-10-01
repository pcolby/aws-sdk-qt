// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTDNSANSWERREQUEST_P_H
#define QTAWS_TESTDNSANSWERREQUEST_P_H

#include "route53request_p.h"
#include "testdnsanswerrequest.h"

namespace QtAws {
namespace Route53 {

class TestDNSAnswerRequest;

class TestDNSAnswerRequestPrivate : public Route53RequestPrivate {

public:
    TestDNSAnswerRequestPrivate(const Route53Request::Action action,
                                   TestDNSAnswerRequest * const q);
    TestDNSAnswerRequestPrivate(const TestDNSAnswerRequestPrivate &other,
                                   TestDNSAnswerRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestDNSAnswerRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
