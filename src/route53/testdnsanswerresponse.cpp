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

#include "testdnsanswerresponse.h"
#include "testdnsanswerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  TestDNSAnswerResponse
 *
 * @brief  Handles Route53 TestDNSAnswer responses.
 *
 * @see    Route53Client::testDNSAnswer
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestDNSAnswerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new TestDNSAnswerResponsePrivate(this), parent)
{
    setRequest(new TestDNSAnswerRequest(request));
    setReply(reply);
}

const TestDNSAnswerRequest * TestDNSAnswerResponse::request() const
{
    Q_D(const TestDNSAnswerResponse);
    return static_cast<const TestDNSAnswerRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 TestDNSAnswer response.
 *
 * @param  response  Response to parse.
 */
void TestDNSAnswerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TestDNSAnswerResponsePrivate
 *
 * @brief  Private implementation for TestDNSAnswerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestDNSAnswerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TestDNSAnswerResponse instance.
 */
TestDNSAnswerResponsePrivate::TestDNSAnswerResponsePrivate(
    TestDNSAnswerQueueResponse * const q) : TestDNSAnswerPrivate(q)
{

}

/**
 * @brief  Parse an Route53 TestDNSAnswerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TestDNSAnswerResponsePrivate::TestDNSAnswerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestDNSAnswerResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
