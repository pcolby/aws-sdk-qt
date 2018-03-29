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

#include "describevtldevicesresponse.h"
#include "describevtldevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeVTLDevicesResponse
 *
 * @brief  Handles StorageGateway DescribeVTLDevices responses.
 *
 * @see    StorageGatewayClient::describeVTLDevices
 */

/**
 * @brief  Constructs a new DescribeVTLDevicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVTLDevicesResponse::DescribeVTLDevicesResponse(
        const DescribeVTLDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DescribeVTLDevicesResponsePrivate(this), parent)
{
    setRequest(new DescribeVTLDevicesRequest(request));
    setReply(reply);
}

const DescribeVTLDevicesRequest * DescribeVTLDevicesResponse::request() const
{
    Q_D(const DescribeVTLDevicesResponse);
    return static_cast<const DescribeVTLDevicesRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeVTLDevices response.
 *
 * @param  response  Response to parse.
 */
void DescribeVTLDevicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVTLDevicesResponsePrivate
 *
 * @brief  Private implementation for DescribeVTLDevicesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVTLDevicesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVTLDevicesResponse instance.
 */
DescribeVTLDevicesResponsePrivate::DescribeVTLDevicesResponsePrivate(
    DescribeVTLDevicesResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeVTLDevicesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVTLDevicesResponsePrivate::DescribeVTLDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVTLDevicesResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
