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

#include "updatemaintenancestarttimeresponse.h"
#include "updatemaintenancestarttimeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  UpdateMaintenanceStartTimeResponse
 *
 * @brief  Handles StorageGateway UpdateMaintenanceStartTime responses.
 *
 * @see    StorageGatewayClient::updateMaintenanceStartTime
 */

/**
 * @brief  Constructs a new UpdateMaintenanceStartTimeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateMaintenanceStartTimeResponse::UpdateMaintenanceStartTimeResponse(
        const UpdateMaintenanceStartTimeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateMaintenanceStartTimeResponse(new UpdateMaintenanceStartTimeResponsePrivate(this), parent)
{
    setRequest(new UpdateMaintenanceStartTimeRequest(request));
    setReply(reply);
}

const UpdateMaintenanceStartTimeRequest * UpdateMaintenanceStartTimeResponse::request() const
{
    Q_D(const UpdateMaintenanceStartTimeResponse);
    return static_cast<const UpdateMaintenanceStartTimeRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway UpdateMaintenanceStartTime response.
 *
 * @param  response  Response to parse.
 */
void UpdateMaintenanceStartTimeResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateMaintenanceStartTimeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateMaintenanceStartTimeResponsePrivate
 *
 * @brief  Private implementation for UpdateMaintenanceStartTimeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMaintenanceStartTimeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateMaintenanceStartTimeResponse instance.
 */
UpdateMaintenanceStartTimeResponsePrivate::UpdateMaintenanceStartTimeResponsePrivate(
    UpdateMaintenanceStartTimeResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway UpdateMaintenanceStartTimeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateMaintenanceStartTimeResponsePrivate::parseUpdateMaintenanceStartTimeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMaintenanceStartTimeResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
