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

#include "updateinstancecustomhealthstatusresponse.h"
#include "updateinstancecustomhealthstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/**
 * @class  UpdateInstanceCustomHealthStatusResponse
 *
 * @brief  Handles ServiceDiscovery UpdateInstanceCustomHealthStatus responses.
 *
 * @see    ServiceDiscoveryClient::updateInstanceCustomHealthStatus
 */

/**
 * @brief  Constructs a new UpdateInstanceCustomHealthStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateInstanceCustomHealthStatusResponse::UpdateInstanceCustomHealthStatusResponse(
        const UpdateInstanceCustomHealthStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new UpdateInstanceCustomHealthStatusResponsePrivate(this), parent)
{
    setRequest(new UpdateInstanceCustomHealthStatusRequest(request));
    setReply(reply);
}

const UpdateInstanceCustomHealthStatusRequest * UpdateInstanceCustomHealthStatusResponse::request() const
{
    Q_D(const UpdateInstanceCustomHealthStatusResponse);
    return static_cast<const UpdateInstanceCustomHealthStatusRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceDiscovery UpdateInstanceCustomHealthStatus response.
 *
 * @param  response  Response to parse.
 */
void UpdateInstanceCustomHealthStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateInstanceCustomHealthStatusResponsePrivate
 *
 * @brief  Private implementation for UpdateInstanceCustomHealthStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateInstanceCustomHealthStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateInstanceCustomHealthStatusResponse instance.
 */
UpdateInstanceCustomHealthStatusResponsePrivate::UpdateInstanceCustomHealthStatusResponsePrivate(
    UpdateInstanceCustomHealthStatusQueueResponse * const q) : UpdateInstanceCustomHealthStatusPrivate(q)
{

}

/**
 * @brief  Parse an ServiceDiscovery UpdateInstanceCustomHealthStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateInstanceCustomHealthStatusResponsePrivate::UpdateInstanceCustomHealthStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInstanceCustomHealthStatusResponse"));
    /// @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
