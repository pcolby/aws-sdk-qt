/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_TESTINVOKEAUTHORIZERRESPONSE_H
#define QTAWS_TESTINVOKEAUTHORIZERRESPONSE_H

#include "apigatewayresponse.h"
#include "testinvokeauthorizerrequest.h"

namespace QtAws {
namespace APIGateway {

class TestInvokeAuthorizerResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT TestInvokeAuthorizerResponse : public APIGatewayResponse {
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

} // namespace APIGateway
} // namespace QtAws

#endif
