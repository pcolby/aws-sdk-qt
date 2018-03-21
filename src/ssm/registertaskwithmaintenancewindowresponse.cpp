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

#include "registertaskwithmaintenancewindowresponse.h"
#include "registertaskwithmaintenancewindowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  RegisterTaskWithMaintenanceWindowResponse
 *
 * @brief  Handles SSM RegisterTaskWithMaintenanceWindow responses.
 *
 * @see    SSMClient::registerTaskWithMaintenanceWindow
 */

/**
 * @brief  Constructs a new RegisterTaskWithMaintenanceWindowResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterTaskWithMaintenanceWindowResponse::RegisterTaskWithMaintenanceWindowResponse(
        const RegisterTaskWithMaintenanceWindowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new RegisterTaskWithMaintenanceWindowResponsePrivate(this), parent)
{
    setRequest(new RegisterTaskWithMaintenanceWindowRequest(request));
    setReply(reply);
}

const RegisterTaskWithMaintenanceWindowRequest * RegisterTaskWithMaintenanceWindowResponse::request() const
{
    Q_D(const RegisterTaskWithMaintenanceWindowResponse);
    return static_cast<const RegisterTaskWithMaintenanceWindowRequest *>(d->request);
}

/**
 * @brief  Parse a SSM RegisterTaskWithMaintenanceWindow response.
 *
 * @param  response  Response to parse.
 */
void RegisterTaskWithMaintenanceWindowResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterTaskWithMaintenanceWindowResponsePrivate
 *
 * @brief  Private implementation for RegisterTaskWithMaintenanceWindowResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterTaskWithMaintenanceWindowResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterTaskWithMaintenanceWindowResponse instance.
 */
RegisterTaskWithMaintenanceWindowResponsePrivate::RegisterTaskWithMaintenanceWindowResponsePrivate(
    RegisterTaskWithMaintenanceWindowQueueResponse * const q) : RegisterTaskWithMaintenanceWindowPrivate(q)
{

}

/**
 * @brief  Parse an SSM RegisterTaskWithMaintenanceWindowResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterTaskWithMaintenanceWindowResponsePrivate::RegisterTaskWithMaintenanceWindowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterTaskWithMaintenanceWindowResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
