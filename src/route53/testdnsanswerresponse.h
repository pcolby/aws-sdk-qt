// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTDNSANSWERRESPONSE_H
#define QTAWS_TESTDNSANSWERRESPONSE_H

#include "route53response.h"
#include "testdnsanswerrequest.h"

namespace QtAws {
namespace Route53 {

class TestDNSAnswerResponsePrivate;

class QTAWSROUTE53_EXPORT TestDNSAnswerResponse : public Route53Response {
    Q_OBJECT

public:
    TestDNSAnswerResponse(const TestDNSAnswerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestDNSAnswerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestDNSAnswerResponse)
    Q_DISABLE_COPY(TestDNSAnswerResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
