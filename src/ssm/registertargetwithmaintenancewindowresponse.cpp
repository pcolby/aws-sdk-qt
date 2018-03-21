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

#include "registertargetwithmaintenancewindowresponse.h"
#include "registertargetwithmaintenancewindowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  RegisterTargetWithMaintenanceWindowResponse
 *
 * @brief  Handles SSM RegisterTargetWithMaintenanceWindow responses.
 *
 * @see    SSMClient::registerTargetWithMaintenanceWindow
 */

/**
 * @brief  Constructs a new RegisterTargetWithMaintenanceWindowResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterTargetWithMaintenanceWindowResponse::RegisterTargetWithMaintenanceWindowResponse(
        const RegisterTargetWithMaintenanceWindowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new RegisterTargetWithMaintenanceWindowResponsePrivate(this), parent)
{
    setRequest(new RegisterTargetWithMaintenanceWindowRequest(request));
    setReply(reply);
}

const RegisterTargetWithMaintenanceWindowRequest * RegisterTargetWithMaintenanceWindowResponse::request() const
{
    Q_D(const RegisterTargetWithMaintenanceWindowResponse);
    return static_cast<const RegisterTargetWithMaintenanceWindowRequest *>(d->request);
}

/**
 * @brief  Parse a SSM RegisterTargetWithMaintenanceWindow response.
 *
 * @param  response  Response to parse.
 */
void RegisterTargetWithMaintenanceWindowResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterTargetWithMaintenanceWindowResponsePrivate
 *
 * @brief  Private implementation for RegisterTargetWithMaintenanceWindowResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterTargetWithMaintenanceWindowResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterTargetWithMaintenanceWindowResponse instance.
 */
RegisterTargetWithMaintenanceWindowResponsePrivate::RegisterTargetWithMaintenanceWindowResponsePrivate(
    RegisterTargetWithMaintenanceWindowQueueResponse * const q) : RegisterTargetWithMaintenanceWindowPrivate(q)
{

}

/**
 * @brief  Parse an SSM RegisterTargetWithMaintenanceWindowResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterTargetWithMaintenanceWindowResponsePrivate::RegisterTargetWithMaintenanceWindowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterTargetWithMaintenanceWindowResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
