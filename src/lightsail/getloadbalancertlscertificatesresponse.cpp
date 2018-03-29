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

#include "getloadbalancertlscertificatesresponse.h"
#include "getloadbalancertlscertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetLoadBalancerTlsCertificatesResponse
 *
 * @brief  Handles Lightsail GetLoadBalancerTlsCertificates responses.
 *
 * @see    LightsailClient::getLoadBalancerTlsCertificates
 */

/**
 * @brief  Constructs a new GetLoadBalancerTlsCertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLoadBalancerTlsCertificatesResponse::GetLoadBalancerTlsCertificatesResponse(
        const GetLoadBalancerTlsCertificatesRequest &request,
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
    Q_D(GetLoadBalancerTlsCertificatesResponse);
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
    GetLoadBalancerTlsCertificatesResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetLoadBalancerTlsCertificatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLoadBalancerTlsCertificatesResponsePrivate::parseGetLoadBalancerTlsCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoadBalancerTlsCertificatesResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
