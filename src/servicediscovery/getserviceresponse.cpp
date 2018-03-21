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

#include "getserviceresponse.h"
#include "getserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceDiscovery {

/**
 * @class  GetServiceResponse
 *
 * @brief  Handles ServiceDiscovery GetService responses.
 *
 * @see    ServiceDiscoveryClient::getService
 */

/**
 * @brief  Constructs a new GetServiceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetServiceResponse::GetServiceResponse(
        const GetServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new GetServiceResponsePrivate(this), parent)
{
    setRequest(new GetServiceRequest(request));
    setReply(reply);
}

const GetServiceRequest * GetServiceResponse::request() const
{
    Q_D(const GetServiceResponse);
    return static_cast<const GetServiceRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceDiscovery GetService response.
 *
 * @param  response  Response to parse.
 */
void GetServiceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetServiceResponsePrivate
 *
 * @brief  Private implementation for GetServiceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetServiceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetServiceResponse instance.
 */
GetServiceResponsePrivate::GetServiceResponsePrivate(
    GetServiceQueueResponse * const q) : GetServicePrivate(q)
{

}

/**
 * @brief  Parse an ServiceDiscovery GetServiceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetServiceResponsePrivate::GetServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceResponse"));
    /// @todo
}

} // namespace ServiceDiscovery
} // namespace AWS
