// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTDNSANSWERRESPONSE_P_H
#define QTAWS_TESTDNSANSWERRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class TestDNSAnswerResponse;

class TestDNSAnswerResponsePrivate : public Route53ResponsePrivate {

public:

    explicit TestDNSAnswerResponsePrivate(TestDNSAnswerResponse * const q);

    void parseTestDNSAnswerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestDNSAnswerResponse)
    Q_DISABLE_COPY(TestDNSAnswerResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
