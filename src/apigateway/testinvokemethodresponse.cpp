/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testinvokemethodresponse.h"
#include "testinvokemethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  TestInvokeMethodResponse
 *
 * @brief  Handles APIGateway TestInvokeMethod responses.
 *
 * @see    APIGatewayClient::testInvokeMethod
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestInvokeMethodResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new TestInvokeMethodResponsePrivate(this), parent)
{
    setRequest(new TestInvokeMethodRequest(request));
    setReply(reply);
}

const TestInvokeMethodRequest * TestInvokeMethodResponse::request() const
{
    Q_D(const TestInvokeMethodResponse);
    return static_cast<const TestInvokeMethodRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway TestInvokeMethod response.
 *
 * @param  response  Response to parse.
 */
void TestInvokeMethodResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TestInvokeMethodResponsePrivate
 *
 * @brief  Private implementation for TestInvokeMethodResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestInvokeMethodResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TestInvokeMethodResponse instance.
 */
TestInvokeMethodResponsePrivate::TestInvokeMethodResponsePrivate(
    TestInvokeMethodQueueResponse * const q) : TestInvokeMethodPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway TestInvokeMethodResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TestInvokeMethodResponsePrivate::TestInvokeMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestInvokeMethodResponse"));
    /// @todo
}
