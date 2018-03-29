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

#include "getinstanceshealthstatusresponse.h"
#include "getinstanceshealthstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/**
 * @class  GetInstancesHealthStatusResponse
 *
 * @brief  Handles ServiceDiscovery GetInstancesHealthStatus responses.
 *
 * @see    ServiceDiscoveryClient::getInstancesHealthStatus
 */

/**
 * @brief  Constructs a new GetInstancesHealthStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInstancesHealthStatusResponse::GetInstancesHealthStatusResponse(
        const GetInstancesHealthStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new GetInstancesHealthStatusResponsePrivate(this), parent)
{
    setRequest(new GetInstancesHealthStatusRequest(request));
    setReply(reply);
}

const GetInstancesHealthStatusRequest * GetInstancesHealthStatusResponse::request() const
{
    Q_D(const GetInstancesHealthStatusResponse);
    return static_cast<const GetInstancesHealthStatusRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceDiscovery GetInstancesHealthStatus response.
 *
 * @param  response  Response to parse.
 */
void GetInstancesHealthStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetInstancesHealthStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetInstancesHealthStatusResponsePrivate
 *
 * @brief  Private implementation for GetInstancesHealthStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstancesHealthStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInstancesHealthStatusResponse instance.
 */
GetInstancesHealthStatusResponsePrivate::GetInstancesHealthStatusResponsePrivate(
    GetInstancesHealthStatusResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceDiscovery GetInstancesHealthStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInstancesHealthStatusResponsePrivate::parseGetInstancesHealthStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstancesHealthStatusResponse"));
    /// @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
