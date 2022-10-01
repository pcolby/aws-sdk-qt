// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTFUNCTIONRESPONSE_H
#define QTAWS_TESTFUNCTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "testfunctionrequest.h"

namespace QtAws {
namespace CloudFront {

class TestFunctionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT TestFunctionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    TestFunctionResponse(const TestFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestFunctionResponse)
    Q_DISABLE_COPY(TestFunctionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
