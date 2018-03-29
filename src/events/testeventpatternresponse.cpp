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

#include "testeventpatternresponse.h"
#include "testeventpatternresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/**
 * @class  TestEventPatternResponse
 *
 * @brief  Handles CloudWatchEvents TestEventPattern responses.
 *
 * @see    CloudWatchEventsClient::testEventPattern
 */

/**
 * @brief  Constructs a new TestEventPatternResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestEventPatternResponse::TestEventPatternResponse(
        const TestEventPatternRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new TestEventPatternResponsePrivate(this), parent)
{
    setRequest(new TestEventPatternRequest(request));
    setReply(reply);
}

const TestEventPatternRequest * TestEventPatternResponse::request() const
{
    Q_D(const TestEventPatternResponse);
    return static_cast<const TestEventPatternRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchEvents TestEventPattern response.
 *
 * @param  response  Response to parse.
 */
void TestEventPatternResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TestEventPatternResponsePrivate
 *
 * @brief  Private implementation for TestEventPatternResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestEventPatternResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TestEventPatternResponse instance.
 */
TestEventPatternResponsePrivate::TestEventPatternResponsePrivate(
    TestEventPatternQueueResponse * const q) : TestEventPatternPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchEvents TestEventPatternResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TestEventPatternResponsePrivate::TestEventPatternResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestEventPatternResponse"));
    /// @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
