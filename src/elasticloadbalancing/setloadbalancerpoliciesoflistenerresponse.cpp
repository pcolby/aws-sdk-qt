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

#include "setloadbalancerpoliciesoflistenerresponse.h"
#include "setloadbalancerpoliciesoflistenerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  SetLoadBalancerPoliciesOfListenerResponse
 *
 * @brief  Handles ElasticLoadBalancing SetLoadBalancerPoliciesOfListener responses.
 *
 * @see    ElasticLoadBalancingClient::setLoadBalancerPoliciesOfListener
 */

/**
 * @brief  Constructs a new SetLoadBalancerPoliciesOfListenerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetLoadBalancerPoliciesOfListenerResponse::SetLoadBalancerPoliciesOfListenerResponse(
        const SetLoadBalancerPoliciesOfListenerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new SetLoadBalancerPoliciesOfListenerResponsePrivate(this), parent)
{
    setRequest(new SetLoadBalancerPoliciesOfListenerRequest(request));
    setReply(reply);
}

const SetLoadBalancerPoliciesOfListenerRequest * SetLoadBalancerPoliciesOfListenerResponse::request() const
{
    Q_D(const SetLoadBalancerPoliciesOfListenerResponse);
    return static_cast<const SetLoadBalancerPoliciesOfListenerRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing SetLoadBalancerPoliciesOfListener response.
 *
 * @param  response  Response to parse.
 */
void SetLoadBalancerPoliciesOfListenerResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetLoadBalancerPoliciesOfListenerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetLoadBalancerPoliciesOfListenerResponsePrivate
 *
 * @brief  Private implementation for SetLoadBalancerPoliciesOfListenerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetLoadBalancerPoliciesOfListenerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetLoadBalancerPoliciesOfListenerResponse instance.
 */
SetLoadBalancerPoliciesOfListenerResponsePrivate::SetLoadBalancerPoliciesOfListenerResponsePrivate(
    SetLoadBalancerPoliciesOfListenerResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing SetLoadBalancerPoliciesOfListenerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetLoadBalancerPoliciesOfListenerResponsePrivate::parseSetLoadBalancerPoliciesOfListenerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetLoadBalancerPoliciesOfListenerResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
