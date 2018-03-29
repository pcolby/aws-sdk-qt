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

#include "describeloggroupsresponse.h"
#include "describeloggroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  DescribeLogGroupsResponse
 *
 * @brief  Handles CloudWatchLogs DescribeLogGroups responses.
 *
 * @see    CloudWatchLogsClient::describeLogGroups
 */

/**
 * @brief  Constructs a new DescribeLogGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLogGroupsResponse::DescribeLogGroupsResponse(
        const DescribeLogGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DescribeLogGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeLogGroupsRequest(request));
    setReply(reply);
}

const DescribeLogGroupsRequest * DescribeLogGroupsResponse::request() const
{
    Q_D(const DescribeLogGroupsResponse);
    return static_cast<const DescribeLogGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DescribeLogGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeLogGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLogGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeLogGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLogGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLogGroupsResponse instance.
 */
DescribeLogGroupsResponsePrivate::DescribeLogGroupsResponsePrivate(
    DescribeLogGroupsResponse * const q) : CloudWatchLogsResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DescribeLogGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLogGroupsResponsePrivate::DescribeLogGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLogGroupsResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
