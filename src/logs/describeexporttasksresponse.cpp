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

#include "describeexporttasksresponse.h"
#include "describeexporttasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  DescribeExportTasksResponse
 *
 * @brief  Handles CloudWatchLogs DescribeExportTasks responses.
 *
 * @see    CloudWatchLogsClient::describeExportTasks
 */

/**
 * @brief  Constructs a new DescribeExportTasksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeExportTasksResponse::DescribeExportTasksResponse(
        const DescribeExportTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DescribeExportTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeExportTasksRequest(request));
    setReply(reply);
}

const DescribeExportTasksRequest * DescribeExportTasksResponse::request() const
{
    Q_D(const DescribeExportTasksResponse);
    return static_cast<const DescribeExportTasksRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DescribeExportTasks response.
 *
 * @param  response  Response to parse.
 */
void DescribeExportTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeExportTasksResponsePrivate
 *
 * @brief  Private implementation for DescribeExportTasksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeExportTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeExportTasksResponse instance.
 */
DescribeExportTasksResponsePrivate::DescribeExportTasksResponsePrivate(
    DescribeExportTasksQueueResponse * const q) : DescribeExportTasksPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DescribeExportTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeExportTasksResponsePrivate::DescribeExportTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExportTasksResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
