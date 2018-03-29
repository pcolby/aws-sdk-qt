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

#include "setloadbalancerlistenersslcertificateresponse.h"
#include "setloadbalancerlistenersslcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  SetLoadBalancerListenerSSLCertificateResponse
 *
 * @brief  Handles ElasticLoadBalancing SetLoadBalancerListenerSSLCertificate responses.
 *
 * @see    ElasticLoadBalancingClient::setLoadBalancerListenerSSLCertificate
 */

/**
 * @brief  Constructs a new SetLoadBalancerListenerSSLCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetLoadBalancerListenerSSLCertificateResponse::SetLoadBalancerListenerSSLCertificateResponse(
        const SetLoadBalancerListenerSSLCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new SetLoadBalancerListenerSSLCertificateResponsePrivate(this), parent)
{
    setRequest(new SetLoadBalancerListenerSSLCertificateRequest(request));
    setReply(reply);
}

const SetLoadBalancerListenerSSLCertificateRequest * SetLoadBalancerListenerSSLCertificateResponse::request() const
{
    Q_D(const SetLoadBalancerListenerSSLCertificateResponse);
    return static_cast<const SetLoadBalancerListenerSSLCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing SetLoadBalancerListenerSSLCertificate response.
 *
 * @param  response  Response to parse.
 */
void SetLoadBalancerListenerSSLCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetLoadBalancerListenerSSLCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetLoadBalancerListenerSSLCertificateResponsePrivate
 *
 * @brief  Private implementation for SetLoadBalancerListenerSSLCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetLoadBalancerListenerSSLCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetLoadBalancerListenerSSLCertificateResponse instance.
 */
SetLoadBalancerListenerSSLCertificateResponsePrivate::SetLoadBalancerListenerSSLCertificateResponsePrivate(
    SetLoadBalancerListenerSSLCertificateResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing SetLoadBalancerListenerSSLCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetLoadBalancerListenerSSLCertificateResponsePrivate::parseSetLoadBalancerListenerSSLCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetLoadBalancerListenerSSLCertificateResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
