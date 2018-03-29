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

#include "testinvokeauthorizerresponse.h"
#include "testinvokeauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  TestInvokeAuthorizerResponse
 *
 * @brief  Handles IoT TestInvokeAuthorizer responses.
 *
 * @see    IoTClient::testInvokeAuthorizer
 */

/**
 * @brief  Constructs a new TestInvokeAuthorizerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestInvokeAuthorizerResponse::TestInvokeAuthorizerResponse(
        const TestInvokeAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new TestInvokeAuthorizerResponsePrivate(this), parent)
{
    setRequest(new TestInvokeAuthorizerRequest(request));
    setReply(reply);
}

const TestInvokeAuthorizerRequest * TestInvokeAuthorizerResponse::request() const
{
    Q_D(const TestInvokeAuthorizerResponse);
    return static_cast<const TestInvokeAuthorizerRequest *>(d->request);
}

/**
 * @brief  Parse a IoT TestInvokeAuthorizer response.
 *
 * @param  response  Response to parse.
 */
void TestInvokeAuthorizerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TestInvokeAuthorizerResponsePrivate
 *
 * @brief  Private implementation for TestInvokeAuthorizerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestInvokeAuthorizerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TestInvokeAuthorizerResponse instance.
 */
TestInvokeAuthorizerResponsePrivate::TestInvokeAuthorizerResponsePrivate(
    TestInvokeAuthorizerResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT TestInvokeAuthorizerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TestInvokeAuthorizerResponsePrivate::TestInvokeAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestInvokeAuthorizerResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
