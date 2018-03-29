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

#include "getserviceresponse.h"
#include "getserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
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
    Q_D(GetServiceResponse);
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
    GetServiceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceDiscovery GetServiceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetServiceResponsePrivate::parseGetServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceResponse"));
    /// @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
