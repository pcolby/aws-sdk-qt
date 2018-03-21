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

#include "deleteloadbalancertlscertificateresponse.h"
#include "deleteloadbalancertlscertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  DeleteLoadBalancerTlsCertificateResponse
 *
 * @brief  Handles Lightsail DeleteLoadBalancerTlsCertificate responses.
 *
 * @see    LightsailClient::deleteLoadBalancerTlsCertificate
 */

/**
 * @brief  Constructs a new DeleteLoadBalancerTlsCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLoadBalancerTlsCertificateResponse::DeleteLoadBalancerTlsCertificateResponse(
        const DeleteLoadBalancerTlsCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DeleteLoadBalancerTlsCertificateResponsePrivate(this), parent)
{
    setRequest(new DeleteLoadBalancerTlsCertificateRequest(request));
    setReply(reply);
}

const DeleteLoadBalancerTlsCertificateRequest * DeleteLoadBalancerTlsCertificateResponse::request() const
{
    Q_D(const DeleteLoadBalancerTlsCertificateResponse);
    return static_cast<const DeleteLoadBalancerTlsCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail DeleteLoadBalancerTlsCertificate response.
 *
 * @param  response  Response to parse.
 */
void DeleteLoadBalancerTlsCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLoadBalancerTlsCertificateResponsePrivate
 *
 * @brief  Private implementation for DeleteLoadBalancerTlsCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoadBalancerTlsCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLoadBalancerTlsCertificateResponse instance.
 */
DeleteLoadBalancerTlsCertificateResponsePrivate::DeleteLoadBalancerTlsCertificateResponsePrivate(
    DeleteLoadBalancerTlsCertificateQueueResponse * const q) : DeleteLoadBalancerTlsCertificatePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail DeleteLoadBalancerTlsCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLoadBalancerTlsCertificateResponsePrivate::DeleteLoadBalancerTlsCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLoadBalancerTlsCertificateResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
