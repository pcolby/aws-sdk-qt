/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_TESTINVOKEMETHODRESPONSE_H
#define QTAWS_TESTINVOKEMETHODRESPONSE_H

#include "apigatewayresponse.h"
#include "testinvokemethodrequest.h"

namespace AWS {

namespace APIGateway {

class TestInvokeMethodResponsePrivate;

class QTAWS_EXPORT TestInvokeMethodResponse : public APIGatewayResponse {
    Q_OBJECT

public:
    TestInvokeMethodResponse(const TestInvokeMethodRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestInvokeMethodRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(TestInvokeMethodResponse)
    Q_DISABLE_COPY(TestInvokeMethodResponse)

};

} // namespace APIGateway
} // namespace AWS

#endif
