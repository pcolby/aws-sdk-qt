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

#include "updatevtldevicetyperesponse.h"
#include "updatevtldevicetyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  UpdateVTLDeviceTypeResponse
 *
 * @brief  Handles StorageGateway UpdateVTLDeviceType responses.
 *
 * @see    StorageGatewayClient::updateVTLDeviceType
 */

/**
 * @brief  Constructs a new UpdateVTLDeviceTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateVTLDeviceTypeResponse::UpdateVTLDeviceTypeResponse(
        const UpdateVTLDeviceTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new UpdateVTLDeviceTypeResponsePrivate(this), parent)
{
    setRequest(new UpdateVTLDeviceTypeRequest(request));
    setReply(reply);
}

const UpdateVTLDeviceTypeRequest * UpdateVTLDeviceTypeResponse::request() const
{
    Q_D(const UpdateVTLDeviceTypeResponse);
    return static_cast<const UpdateVTLDeviceTypeRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway UpdateVTLDeviceType response.
 *
 * @param  response  Response to parse.
 */
void UpdateVTLDeviceTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateVTLDeviceTypeResponsePrivate
 *
 * @brief  Private implementation for UpdateVTLDeviceTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateVTLDeviceTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateVTLDeviceTypeResponse instance.
 */
UpdateVTLDeviceTypeResponsePrivate::UpdateVTLDeviceTypeResponsePrivate(
    UpdateVTLDeviceTypeQueueResponse * const q) : UpdateVTLDeviceTypePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway UpdateVTLDeviceTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateVTLDeviceTypeResponsePrivate::UpdateVTLDeviceTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVTLDeviceTypeResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
