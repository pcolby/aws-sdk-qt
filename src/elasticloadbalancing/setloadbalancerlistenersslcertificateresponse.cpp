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

#include "setloadbalancerlistenersslcertificateresponse.h"
#include "setloadbalancerlistenersslcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  SetLoadBalancerListenerSSLCertificateResponse
 *
 * @brief  Handles ElasticLoadBalancing SetLoadBalancerListenerSSLCertificate responses.
 *
 * @see    ElasticLoadBalancingClient::setLoadBalancerListenerSSLCertificate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetLoadBalancerListenerSSLCertificateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
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
    Q_D(Response);
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
    SetLoadBalancerListenerSSLCertificateQueueResponse * const q) : SetLoadBalancerListenerSSLCertificatePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing SetLoadBalancerListenerSSLCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetLoadBalancerListenerSSLCertificateResponsePrivate::SetLoadBalancerListenerSSLCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetLoadBalancerListenerSSLCertificateResponse"));
    /// @todo
}
