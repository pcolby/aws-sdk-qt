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

#include "attachelasticloadbalancerresponse.h"
#include "attachelasticloadbalancerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  AttachElasticLoadBalancerResponse
 *
 * @brief  Handles OpsWorks AttachElasticLoadBalancer responses.
 *
 * @see    OpsWorksClient::attachElasticLoadBalancer
 */

/**
 * @brief  Constructs a new AttachElasticLoadBalancerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachElasticLoadBalancerResponse::AttachElasticLoadBalancerResponse(
        const AttachElasticLoadBalancerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new AttachElasticLoadBalancerResponsePrivate(this), parent)
{
    setRequest(new AttachElasticLoadBalancerRequest(request));
    setReply(reply);
}

const AttachElasticLoadBalancerRequest * AttachElasticLoadBalancerResponse::request() const
{
    Q_D(const AttachElasticLoadBalancerResponse);
    return static_cast<const AttachElasticLoadBalancerRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks AttachElasticLoadBalancer response.
 *
 * @param  response  Response to parse.
 */
void AttachElasticLoadBalancerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachElasticLoadBalancerResponsePrivate
 *
 * @brief  Private implementation for AttachElasticLoadBalancerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachElasticLoadBalancerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachElasticLoadBalancerResponse instance.
 */
AttachElasticLoadBalancerResponsePrivate::AttachElasticLoadBalancerResponsePrivate(
    AttachElasticLoadBalancerQueueResponse * const q) : AttachElasticLoadBalancerPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks AttachElasticLoadBalancerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachElasticLoadBalancerResponsePrivate::AttachElasticLoadBalancerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachElasticLoadBalancerResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
