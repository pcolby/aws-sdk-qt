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

#include "createstorediscsivolumeresponse.h"
#include "createstorediscsivolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  CreateStorediSCSIVolumeResponse
 *
 * @brief  Handles StorageGateway CreateStorediSCSIVolume responses.
 *
 * @see    StorageGatewayClient::createStorediSCSIVolume
 */

/**
 * @brief  Constructs a new CreateStorediSCSIVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStorediSCSIVolumeResponse::CreateStorediSCSIVolumeResponse(
        const CreateStorediSCSIVolumeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new CreateStorediSCSIVolumeResponsePrivate(this), parent)
{
    setRequest(new CreateStorediSCSIVolumeRequest(request));
    setReply(reply);
}

const CreateStorediSCSIVolumeRequest * CreateStorediSCSIVolumeResponse::request() const
{
    Q_D(const CreateStorediSCSIVolumeResponse);
    return static_cast<const CreateStorediSCSIVolumeRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway CreateStorediSCSIVolume response.
 *
 * @param  response  Response to parse.
 */
void CreateStorediSCSIVolumeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateStorediSCSIVolumeResponsePrivate
 *
 * @brief  Private implementation for CreateStorediSCSIVolumeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStorediSCSIVolumeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStorediSCSIVolumeResponse instance.
 */
CreateStorediSCSIVolumeResponsePrivate::CreateStorediSCSIVolumeResponsePrivate(
    CreateStorediSCSIVolumeQueueResponse * const q) : CreateStorediSCSIVolumePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway CreateStorediSCSIVolumeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStorediSCSIVolumeResponsePrivate::CreateStorediSCSIVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStorediSCSIVolumeResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
