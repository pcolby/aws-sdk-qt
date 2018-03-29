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

#include "attachloadbalancertlscertificateresponse.h"
#include "attachloadbalancertlscertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  AttachLoadBalancerTlsCertificateResponse
 *
 * @brief  Handles Lightsail AttachLoadBalancerTlsCertificate responses.
 *
 * @see    LightsailClient::attachLoadBalancerTlsCertificate
 */

/**
 * @brief  Constructs a new AttachLoadBalancerTlsCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachLoadBalancerTlsCertificateResponse::AttachLoadBalancerTlsCertificateResponse(
        const AttachLoadBalancerTlsCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new AttachLoadBalancerTlsCertificateResponsePrivate(this), parent)
{
    setRequest(new AttachLoadBalancerTlsCertificateRequest(request));
    setReply(reply);
}

const AttachLoadBalancerTlsCertificateRequest * AttachLoadBalancerTlsCertificateResponse::request() const
{
    Q_D(const AttachLoadBalancerTlsCertificateResponse);
    return static_cast<const AttachLoadBalancerTlsCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail AttachLoadBalancerTlsCertificate response.
 *
 * @param  response  Response to parse.
 */
void AttachLoadBalancerTlsCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(AttachLoadBalancerTlsCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachLoadBalancerTlsCertificateResponsePrivate
 *
 * @brief  Private implementation for AttachLoadBalancerTlsCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachLoadBalancerTlsCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachLoadBalancerTlsCertificateResponse instance.
 */
AttachLoadBalancerTlsCertificateResponsePrivate::AttachLoadBalancerTlsCertificateResponsePrivate(
    AttachLoadBalancerTlsCertificateResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail AttachLoadBalancerTlsCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachLoadBalancerTlsCertificateResponsePrivate::parseAttachLoadBalancerTlsCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachLoadBalancerTlsCertificateResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
