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

#include "updatemaintenancewindowtargetresponse.h"
#include "updatemaintenancewindowtargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  UpdateMaintenanceWindowTargetResponse
 *
 * @brief  Handles SSM UpdateMaintenanceWindowTarget responses.
 *
 * @see    SSMClient::updateMaintenanceWindowTarget
 */

/**
 * @brief  Constructs a new UpdateMaintenanceWindowTargetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateMaintenanceWindowTargetResponse::UpdateMaintenanceWindowTargetResponse(
        const UpdateMaintenanceWindowTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new UpdateMaintenanceWindowTargetResponsePrivate(this), parent)
{
    setRequest(new UpdateMaintenanceWindowTargetRequest(request));
    setReply(reply);
}

const UpdateMaintenanceWindowTargetRequest * UpdateMaintenanceWindowTargetResponse::request() const
{
    Q_D(const UpdateMaintenanceWindowTargetResponse);
    return static_cast<const UpdateMaintenanceWindowTargetRequest *>(d->request);
}

/**
 * @brief  Parse a SSM UpdateMaintenanceWindowTarget response.
 *
 * @param  response  Response to parse.
 */
void UpdateMaintenanceWindowTargetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateMaintenanceWindowTargetResponsePrivate
 *
 * @brief  Private implementation for UpdateMaintenanceWindowTargetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMaintenanceWindowTargetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateMaintenanceWindowTargetResponse instance.
 */
UpdateMaintenanceWindowTargetResponsePrivate::UpdateMaintenanceWindowTargetResponsePrivate(
    UpdateMaintenanceWindowTargetQueueResponse * const q) : UpdateMaintenanceWindowTargetPrivate(q)
{

}

/**
 * @brief  Parse an SSM UpdateMaintenanceWindowTargetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateMaintenanceWindowTargetResponsePrivate::UpdateMaintenanceWindowTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMaintenanceWindowTargetResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
