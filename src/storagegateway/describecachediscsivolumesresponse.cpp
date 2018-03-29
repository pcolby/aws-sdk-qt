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

#include "describecachediscsivolumesresponse.h"
#include "describecachediscsivolumesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeCachediSCSIVolumesResponse
 *
 * @brief  Handles StorageGateway DescribeCachediSCSIVolumes responses.
 *
 * @see    StorageGatewayClient::describeCachediSCSIVolumes
 */

/**
 * @brief  Constructs a new DescribeCachediSCSIVolumesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCachediSCSIVolumesResponse::DescribeCachediSCSIVolumesResponse(
        const DescribeCachediSCSIVolumesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DescribeCachediSCSIVolumesResponsePrivate(this), parent)
{
    setRequest(new DescribeCachediSCSIVolumesRequest(request));
    setReply(reply);
}

const DescribeCachediSCSIVolumesRequest * DescribeCachediSCSIVolumesResponse::request() const
{
    Q_D(const DescribeCachediSCSIVolumesResponse);
    return static_cast<const DescribeCachediSCSIVolumesRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeCachediSCSIVolumes response.
 *
 * @param  response  Response to parse.
 */
void DescribeCachediSCSIVolumesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeCachediSCSIVolumesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCachediSCSIVolumesResponsePrivate
 *
 * @brief  Private implementation for DescribeCachediSCSIVolumesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCachediSCSIVolumesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCachediSCSIVolumesResponse instance.
 */
DescribeCachediSCSIVolumesResponsePrivate::DescribeCachediSCSIVolumesResponsePrivate(
    DescribeCachediSCSIVolumesResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeCachediSCSIVolumesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCachediSCSIVolumesResponsePrivate::parseDescribeCachediSCSIVolumesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCachediSCSIVolumesResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
