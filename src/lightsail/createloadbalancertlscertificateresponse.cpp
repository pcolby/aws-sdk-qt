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

#include "createloadbalancertlscertificateresponse.h"
#include "createloadbalancertlscertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  CreateLoadBalancerTlsCertificateResponse
 *
 * @brief  Handles Lightsail CreateLoadBalancerTlsCertificate responses.
 *
 * @see    LightsailClient::createLoadBalancerTlsCertificate
 */

/**
 * @brief  Constructs a new CreateLoadBalancerTlsCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLoadBalancerTlsCertificateResponse::CreateLoadBalancerTlsCertificateResponse(
        const CreateLoadBalancerTlsCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new CreateLoadBalancerTlsCertificateResponsePrivate(this), parent)
{
    setRequest(new CreateLoadBalancerTlsCertificateRequest(request));
    setReply(reply);
}

const CreateLoadBalancerTlsCertificateRequest * CreateLoadBalancerTlsCertificateResponse::request() const
{
    Q_D(const CreateLoadBalancerTlsCertificateResponse);
    return static_cast<const CreateLoadBalancerTlsCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail CreateLoadBalancerTlsCertificate response.
 *
 * @param  response  Response to parse.
 */
void CreateLoadBalancerTlsCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLoadBalancerTlsCertificateResponsePrivate
 *
 * @brief  Private implementation for CreateLoadBalancerTlsCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoadBalancerTlsCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLoadBalancerTlsCertificateResponse instance.
 */
CreateLoadBalancerTlsCertificateResponsePrivate::CreateLoadBalancerTlsCertificateResponsePrivate(
    CreateLoadBalancerTlsCertificateQueueResponse * const q) : CreateLoadBalancerTlsCertificatePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail CreateLoadBalancerTlsCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLoadBalancerTlsCertificateResponsePrivate::CreateLoadBalancerTlsCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLoadBalancerTlsCertificateResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
