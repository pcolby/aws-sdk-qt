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

#include "getloadbalancertlscertificatesresponse.h"
#include "getloadbalancertlscertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetLoadBalancerTlsCertificatesResponse
 *
 * @brief  Handles Lightsail GetLoadBalancerTlsCertificates responses.
 *
 * @see    LightsailClient::getLoadBalancerTlsCertificates
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLoadBalancerTlsCertificatesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetLoadBalancerTlsCertificatesResponsePrivate(this), parent)
{
    setRequest(new GetLoadBalancerTlsCertificatesRequest(request));
    setReply(reply);
}

const GetLoadBalancerTlsCertificatesRequest * GetLoadBalancerTlsCertificatesResponse::request() const
{
    Q_D(const GetLoadBalancerTlsCertificatesResponse);
    return static_cast<const GetLoadBalancerTlsCertificatesRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetLoadBalancerTlsCertificates response.
 *
 * @param  response  Response to parse.
 */
void GetLoadBalancerTlsCertificatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetLoadBalancerTlsCertificatesResponsePrivate
 *
 * @brief  Private implementation for GetLoadBalancerTlsCertificatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoadBalancerTlsCertificatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLoadBalancerTlsCertificatesResponse instance.
 */
GetLoadBalancerTlsCertificatesResponsePrivate::GetLoadBalancerTlsCertificatesResponsePrivate(
    GetLoadBalancerTlsCertificatesQueueResponse * const q) : GetLoadBalancerTlsCertificatesPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetLoadBalancerTlsCertificatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLoadBalancerTlsCertificatesResponsePrivate::GetLoadBalancerTlsCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoadBalancerTlsCertificatesResponse"));
    /// @todo
}
