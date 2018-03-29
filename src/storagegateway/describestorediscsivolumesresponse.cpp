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

#include "describestorediscsivolumesresponse.h"
#include "describestorediscsivolumesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  DescribeStorediSCSIVolumesResponse
 *
 * @brief  Handles StorageGateway DescribeStorediSCSIVolumes responses.
 *
 * @see    StorageGatewayClient::describeStorediSCSIVolumes
 */

/**
 * @brief  Constructs a new DescribeStorediSCSIVolumesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStorediSCSIVolumesResponse::DescribeStorediSCSIVolumesResponse(
        const DescribeStorediSCSIVolumesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DescribeStorediSCSIVolumesResponsePrivate(this), parent)
{
    setRequest(new DescribeStorediSCSIVolumesRequest(request));
    setReply(reply);
}

const DescribeStorediSCSIVolumesRequest * DescribeStorediSCSIVolumesResponse::request() const
{
    Q_D(const DescribeStorediSCSIVolumesResponse);
    return static_cast<const DescribeStorediSCSIVolumesRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeStorediSCSIVolumes response.
 *
 * @param  response  Response to parse.
 */
void DescribeStorediSCSIVolumesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStorediSCSIVolumesResponsePrivate
 *
 * @brief  Private implementation for DescribeStorediSCSIVolumesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStorediSCSIVolumesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStorediSCSIVolumesResponse instance.
 */
DescribeStorediSCSIVolumesResponsePrivate::DescribeStorediSCSIVolumesResponsePrivate(
    DescribeStorediSCSIVolumesQueueResponse * const q) : DescribeStorediSCSIVolumesPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeStorediSCSIVolumesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStorediSCSIVolumesResponsePrivate::DescribeStorediSCSIVolumesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStorediSCSIVolumesResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
