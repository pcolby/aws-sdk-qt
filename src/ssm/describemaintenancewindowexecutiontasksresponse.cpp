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

#include "describemaintenancewindowexecutiontasksresponse.h"
#include "describemaintenancewindowexecutiontasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeMaintenanceWindowExecutionTasksResponse
 *
 * @brief  Handles SSM DescribeMaintenanceWindowExecutionTasks responses.
 *
 * @see    SSMClient::describeMaintenanceWindowExecutionTasks
 */

/**
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionTasksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMaintenanceWindowExecutionTasksResponse::DescribeMaintenanceWindowExecutionTasksResponse(
        const DescribeMaintenanceWindowExecutionTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeMaintenanceWindowExecutionTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeMaintenanceWindowExecutionTasksRequest(request));
    setReply(reply);
}

const DescribeMaintenanceWindowExecutionTasksRequest * DescribeMaintenanceWindowExecutionTasksResponse::request() const
{
    Q_D(const DescribeMaintenanceWindowExecutionTasksResponse);
    return static_cast<const DescribeMaintenanceWindowExecutionTasksRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeMaintenanceWindowExecutionTasks response.
 *
 * @param  response  Response to parse.
 */
void DescribeMaintenanceWindowExecutionTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMaintenanceWindowExecutionTasksResponsePrivate
 *
 * @brief  Private implementation for DescribeMaintenanceWindowExecutionTasksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMaintenanceWindowExecutionTasksResponse instance.
 */
DescribeMaintenanceWindowExecutionTasksResponsePrivate::DescribeMaintenanceWindowExecutionTasksResponsePrivate(
    DescribeMaintenanceWindowExecutionTasksQueueResponse * const q) : DescribeMaintenanceWindowExecutionTasksPrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeMaintenanceWindowExecutionTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMaintenanceWindowExecutionTasksResponsePrivate::DescribeMaintenanceWindowExecutionTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMaintenanceWindowExecutionTasksResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
