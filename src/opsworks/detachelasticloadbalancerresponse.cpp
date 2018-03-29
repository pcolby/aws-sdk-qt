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

#include "detachelasticloadbalancerresponse.h"
#include "detachelasticloadbalancerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DetachElasticLoadBalancerResponse
 *
 * @brief  Handles OpsWorks DetachElasticLoadBalancer responses.
 *
 * @see    OpsWorksClient::detachElasticLoadBalancer
 */

/**
 * @brief  Constructs a new DetachElasticLoadBalancerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachElasticLoadBalancerResponse::DetachElasticLoadBalancerResponse(
        const DetachElasticLoadBalancerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DetachElasticLoadBalancerResponsePrivate(this), parent)
{
    setRequest(new DetachElasticLoadBalancerRequest(request));
    setReply(reply);
}

const DetachElasticLoadBalancerRequest * DetachElasticLoadBalancerResponse::request() const
{
    Q_D(const DetachElasticLoadBalancerResponse);
    return static_cast<const DetachElasticLoadBalancerRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DetachElasticLoadBalancer response.
 *
 * @param  response  Response to parse.
 */
void DetachElasticLoadBalancerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachElasticLoadBalancerResponsePrivate
 *
 * @brief  Private implementation for DetachElasticLoadBalancerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachElasticLoadBalancerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachElasticLoadBalancerResponse instance.
 */
DetachElasticLoadBalancerResponsePrivate::DetachElasticLoadBalancerResponsePrivate(
    DetachElasticLoadBalancerQueueResponse * const q) : DetachElasticLoadBalancerPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DetachElasticLoadBalancerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachElasticLoadBalancerResponsePrivate::DetachElasticLoadBalancerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachElasticLoadBalancerResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
