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

#include "describemaintenancewindowtasksresponse.h"
#include "describemaintenancewindowtasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DescribeMaintenanceWindowTasksResponse
 *
 * @brief  Handles SSM DescribeMaintenanceWindowTasks responses.
 *
 * @see    SSMClient::describeMaintenanceWindowTasks
 */

/**
 * @brief  Constructs a new DescribeMaintenanceWindowTasksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMaintenanceWindowTasksResponse::DescribeMaintenanceWindowTasksResponse(
        const DescribeMaintenanceWindowTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeMaintenanceWindowTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeMaintenanceWindowTasksRequest(request));
    setReply(reply);
}

const DescribeMaintenanceWindowTasksRequest * DescribeMaintenanceWindowTasksResponse::request() const
{
    Q_D(const DescribeMaintenanceWindowTasksResponse);
    return static_cast<const DescribeMaintenanceWindowTasksRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeMaintenanceWindowTasks response.
 *
 * @param  response  Response to parse.
 */
void DescribeMaintenanceWindowTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMaintenanceWindowTasksResponsePrivate
 *
 * @brief  Private implementation for DescribeMaintenanceWindowTasksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMaintenanceWindowTasksResponse instance.
 */
DescribeMaintenanceWindowTasksResponsePrivate::DescribeMaintenanceWindowTasksResponsePrivate(
    DescribeMaintenanceWindowTasksQueueResponse * const q) : DescribeMaintenanceWindowTasksPrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeMaintenanceWindowTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMaintenanceWindowTasksResponsePrivate::DescribeMaintenanceWindowTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMaintenanceWindowTasksResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
