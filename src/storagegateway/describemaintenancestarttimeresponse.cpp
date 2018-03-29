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

#include "describemaintenancestarttimeresponse.h"
#include "describemaintenancestarttimeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeMaintenanceStartTimeResponse
 *
 * @brief  Handles StorageGateway DescribeMaintenanceStartTime responses.
 *
 * @see    StorageGatewayClient::describeMaintenanceStartTime
 */

/**
 * @brief  Constructs a new DescribeMaintenanceStartTimeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMaintenanceStartTimeResponse::DescribeMaintenanceStartTimeResponse(
        const DescribeMaintenanceStartTimeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DescribeMaintenanceStartTimeResponsePrivate(this), parent)
{
    setRequest(new DescribeMaintenanceStartTimeRequest(request));
    setReply(reply);
}

const DescribeMaintenanceStartTimeRequest * DescribeMaintenanceStartTimeResponse::request() const
{
    Q_D(const DescribeMaintenanceStartTimeResponse);
    return static_cast<const DescribeMaintenanceStartTimeRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeMaintenanceStartTime response.
 *
 * @param  response  Response to parse.
 */
void DescribeMaintenanceStartTimeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMaintenanceStartTimeResponsePrivate
 *
 * @brief  Private implementation for DescribeMaintenanceStartTimeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceStartTimeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMaintenanceStartTimeResponse instance.
 */
DescribeMaintenanceStartTimeResponsePrivate::DescribeMaintenanceStartTimeResponsePrivate(
    DescribeMaintenanceStartTimeQueueResponse * const q) : DescribeMaintenanceStartTimePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeMaintenanceStartTimeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMaintenanceStartTimeResponsePrivate::DescribeMaintenanceStartTimeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMaintenanceStartTimeResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
