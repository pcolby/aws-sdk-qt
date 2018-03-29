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

#include "detachloadbalancerfromsubnetsresponse.h"
#include "detachloadbalancerfromsubnetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  DetachLoadBalancerFromSubnetsResponse
 *
 * @brief  Handles ElasticLoadBalancing DetachLoadBalancerFromSubnets responses.
 *
 * @see    ElasticLoadBalancingClient::detachLoadBalancerFromSubnets
 */

/**
 * @brief  Constructs a new DetachLoadBalancerFromSubnetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachLoadBalancerFromSubnetsResponse::DetachLoadBalancerFromSubnetsResponse(
        const DetachLoadBalancerFromSubnetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new DetachLoadBalancerFromSubnetsResponsePrivate(this), parent)
{
    setRequest(new DetachLoadBalancerFromSubnetsRequest(request));
    setReply(reply);
}

const DetachLoadBalancerFromSubnetsRequest * DetachLoadBalancerFromSubnetsResponse::request() const
{
    Q_D(const DetachLoadBalancerFromSubnetsResponse);
    return static_cast<const DetachLoadBalancerFromSubnetsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing DetachLoadBalancerFromSubnets response.
 *
 * @param  response  Response to parse.
 */
void DetachLoadBalancerFromSubnetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachLoadBalancerFromSubnetsResponsePrivate
 *
 * @brief  Private implementation for DetachLoadBalancerFromSubnetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachLoadBalancerFromSubnetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachLoadBalancerFromSubnetsResponse instance.
 */
DetachLoadBalancerFromSubnetsResponsePrivate::DetachLoadBalancerFromSubnetsResponsePrivate(
    DetachLoadBalancerFromSubnetsResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing DetachLoadBalancerFromSubnetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachLoadBalancerFromSubnetsResponsePrivate::DetachLoadBalancerFromSubnetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachLoadBalancerFromSubnetsResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
