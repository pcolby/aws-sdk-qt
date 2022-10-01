// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTINVOKEMETHODRESPONSE_H
#define QTAWS_TESTINVOKEMETHODRESPONSE_H

#include "apigatewayresponse.h"
#include "testinvokemethodrequest.h"

namespace QtAws {
namespace ApiGateway {

class TestInvokeMethodResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT TestInvokeMethodResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    TestInvokeMethodResponse(const TestInvokeMethodRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestInvokeMethodRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestInvokeMethodResponse)
    Q_DISABLE_COPY(TestInvokeMethodResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
