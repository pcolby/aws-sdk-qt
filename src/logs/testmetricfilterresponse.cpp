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

#include "testmetricfilterresponse.h"
#include "testmetricfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  TestMetricFilterResponse
 *
 * @brief  Handles CloudWatchLogs TestMetricFilter responses.
 *
 * @see    CloudWatchLogsClient::testMetricFilter
 */

/**
 * @brief  Constructs a new TestMetricFilterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestMetricFilterResponse::TestMetricFilterResponse(
        const TestMetricFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new TestMetricFilterResponsePrivate(this), parent)
{
    setRequest(new TestMetricFilterRequest(request));
    setReply(reply);
}

const TestMetricFilterRequest * TestMetricFilterResponse::request() const
{
    Q_D(const TestMetricFilterResponse);
    return static_cast<const TestMetricFilterRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs TestMetricFilter response.
 *
 * @param  response  Response to parse.
 */
void TestMetricFilterResponse::parseSuccess(QIODevice &response)
{
    Q_D(TestMetricFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TestMetricFilterResponsePrivate
 *
 * @brief  Private implementation for TestMetricFilterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestMetricFilterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TestMetricFilterResponse instance.
 */
TestMetricFilterResponsePrivate::TestMetricFilterResponsePrivate(
    TestMetricFilterResponse * const q) : CloudWatchLogsResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs TestMetricFilterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TestMetricFilterResponsePrivate::parseTestMetricFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestMetricFilterResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
