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

#include "applysecuritygroupstoloadbalancerresponse.h"
#include "applysecuritygroupstoloadbalancerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  ApplySecurityGroupsToLoadBalancerResponse
 *
 * @brief  Handles ElasticLoadBalancing ApplySecurityGroupsToLoadBalancer responses.
 *
 * @see    ElasticLoadBalancingClient::applySecurityGroupsToLoadBalancer
 */

/**
 * @brief  Constructs a new ApplySecurityGroupsToLoadBalancerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ApplySecurityGroupsToLoadBalancerResponse::ApplySecurityGroupsToLoadBalancerResponse(
        const ApplySecurityGroupsToLoadBalancerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new ApplySecurityGroupsToLoadBalancerResponsePrivate(this), parent)
{
    setRequest(new ApplySecurityGroupsToLoadBalancerRequest(request));
    setReply(reply);
}

const ApplySecurityGroupsToLoadBalancerRequest * ApplySecurityGroupsToLoadBalancerResponse::request() const
{
    Q_D(const ApplySecurityGroupsToLoadBalancerResponse);
    return static_cast<const ApplySecurityGroupsToLoadBalancerRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing ApplySecurityGroupsToLoadBalancer response.
 *
 * @param  response  Response to parse.
 */
void ApplySecurityGroupsToLoadBalancerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ApplySecurityGroupsToLoadBalancerResponsePrivate
 *
 * @brief  Private implementation for ApplySecurityGroupsToLoadBalancerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApplySecurityGroupsToLoadBalancerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ApplySecurityGroupsToLoadBalancerResponse instance.
 */
ApplySecurityGroupsToLoadBalancerResponsePrivate::ApplySecurityGroupsToLoadBalancerResponsePrivate(
    ApplySecurityGroupsToLoadBalancerQueueResponse * const q) : ApplySecurityGroupsToLoadBalancerPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing ApplySecurityGroupsToLoadBalancerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ApplySecurityGroupsToLoadBalancerResponsePrivate::ApplySecurityGroupsToLoadBalancerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ApplySecurityGroupsToLoadBalancerResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
