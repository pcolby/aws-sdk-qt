// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTINVOKEAUTHORIZERRESPONSE_H
#define QTAWS_TESTINVOKEAUTHORIZERRESPONSE_H

#include "iotresponse.h"
#include "testinvokeauthorizerrequest.h"

namespace QtAws {
namespace IoT {

class TestInvokeAuthorizerResponsePrivate;

class QTAWSIOT_EXPORT TestInvokeAuthorizerResponse : public IoTResponse {
    Q_OBJECT

public:
    TestInvokeAuthorizerResponse(const TestInvokeAuthorizerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestInvokeAuthorizerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestInvokeAuthorizerResponse)
    Q_DISABLE_COPY(TestInvokeAuthorizerResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
