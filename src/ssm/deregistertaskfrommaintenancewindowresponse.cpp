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

#include "deregistertaskfrommaintenancewindowresponse.h"
#include "deregistertaskfrommaintenancewindowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DeregisterTaskFromMaintenanceWindowResponse
 *
 * @brief  Handles SSM DeregisterTaskFromMaintenanceWindow responses.
 *
 * @see    SSMClient::deregisterTaskFromMaintenanceWindow
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterTaskFromMaintenanceWindowResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DeregisterTaskFromMaintenanceWindowResponsePrivate(this), parent)
{
    setRequest(new DeregisterTaskFromMaintenanceWindowRequest(request));
    setReply(reply);
}

const DeregisterTaskFromMaintenanceWindowRequest * DeregisterTaskFromMaintenanceWindowResponse::request() const
{
    Q_D(const DeregisterTaskFromMaintenanceWindowResponse);
    return static_cast<const DeregisterTaskFromMaintenanceWindowRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DeregisterTaskFromMaintenanceWindow response.
 *
 * @param  response  Response to parse.
 */
void DeregisterTaskFromMaintenanceWindowResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterTaskFromMaintenanceWindowResponsePrivate
 *
 * @brief  Private implementation for DeregisterTaskFromMaintenanceWindowResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterTaskFromMaintenanceWindowResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterTaskFromMaintenanceWindowResponse instance.
 */
DeregisterTaskFromMaintenanceWindowResponsePrivate::DeregisterTaskFromMaintenanceWindowResponsePrivate(
    DeregisterTaskFromMaintenanceWindowQueueResponse * const q) : DeregisterTaskFromMaintenanceWindowPrivate(q)
{

}

/**
 * @brief  Parse an SSM DeregisterTaskFromMaintenanceWindowResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterTaskFromMaintenanceWindowResponsePrivate::DeregisterTaskFromMaintenanceWindowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterTaskFromMaintenanceWindowResponse"));
    /// @todo
}
