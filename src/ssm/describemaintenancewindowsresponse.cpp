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

#include "describemaintenancewindowsresponse.h"
#include "describemaintenancewindowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DescribeMaintenanceWindowsResponse
 *
 * @brief  Handles SSM DescribeMaintenanceWindows responses.
 *
 * @see    SSMClient::describeMaintenanceWindows
 */

/**
 * @brief  Constructs a new DescribeMaintenanceWindowsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMaintenanceWindowsResponse::DescribeMaintenanceWindowsResponse(
        const DescribeMaintenanceWindowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeMaintenanceWindowsResponsePrivate(this), parent)
{
    setRequest(new DescribeMaintenanceWindowsRequest(request));
    setReply(reply);
}

const DescribeMaintenanceWindowsRequest * DescribeMaintenanceWindowsResponse::request() const
{
    Q_D(const DescribeMaintenanceWindowsResponse);
    return static_cast<const DescribeMaintenanceWindowsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeMaintenanceWindows response.
 *
 * @param  response  Response to parse.
 */
void DescribeMaintenanceWindowsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMaintenanceWindowsResponsePrivate
 *
 * @brief  Private implementation for DescribeMaintenanceWindowsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMaintenanceWindowsResponse instance.
 */
DescribeMaintenanceWindowsResponsePrivate::DescribeMaintenanceWindowsResponsePrivate(
    DescribeMaintenanceWindowsQueueResponse * const q) : DescribeMaintenanceWindowsPrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeMaintenanceWindowsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMaintenanceWindowsResponsePrivate::DescribeMaintenanceWindowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMaintenanceWindowsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
