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

#include "deregistertargetfrommaintenancewindowresponse.h"
#include "deregistertargetfrommaintenancewindowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DeregisterTargetFromMaintenanceWindowResponse
 *
 * @brief  Handles SSM DeregisterTargetFromMaintenanceWindow responses.
 *
 * @see    SSMClient::deregisterTargetFromMaintenanceWindow
 */

/**
 * @brief  Constructs a new DeregisterTargetFromMaintenanceWindowResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterTargetFromMaintenanceWindowResponse::DeregisterTargetFromMaintenanceWindowResponse(
        const DeregisterTargetFromMaintenanceWindowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DeregisterTargetFromMaintenanceWindowResponsePrivate(this), parent)
{
    setRequest(new DeregisterTargetFromMaintenanceWindowRequest(request));
    setReply(reply);
}

const DeregisterTargetFromMaintenanceWindowRequest * DeregisterTargetFromMaintenanceWindowResponse::request() const
{
    Q_D(const DeregisterTargetFromMaintenanceWindowResponse);
    return static_cast<const DeregisterTargetFromMaintenanceWindowRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DeregisterTargetFromMaintenanceWindow response.
 *
 * @param  response  Response to parse.
 */
void DeregisterTargetFromMaintenanceWindowResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterTargetFromMaintenanceWindowResponsePrivate
 *
 * @brief  Private implementation for DeregisterTargetFromMaintenanceWindowResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterTargetFromMaintenanceWindowResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterTargetFromMaintenanceWindowResponse instance.
 */
DeregisterTargetFromMaintenanceWindowResponsePrivate::DeregisterTargetFromMaintenanceWindowResponsePrivate(
    DeregisterTargetFromMaintenanceWindowQueueResponse * const q) : DeregisterTargetFromMaintenanceWindowPrivate(q)
{

}

/**
 * @brief  Parse an SSM DeregisterTargetFromMaintenanceWindowResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterTargetFromMaintenanceWindowResponsePrivate::DeregisterTargetFromMaintenanceWindowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterTargetFromMaintenanceWindowResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
