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

#include "describeelasticloadbalancersresponse.h"
#include "describeelasticloadbalancersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeElasticLoadBalancersResponse
 *
 * @brief  Handles OpsWorks DescribeElasticLoadBalancers responses.
 *
 * @see    OpsWorksClient::describeElasticLoadBalancers
 */

/**
 * @brief  Constructs a new DescribeElasticLoadBalancersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeElasticLoadBalancersResponse::DescribeElasticLoadBalancersResponse(
        const DescribeElasticLoadBalancersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeElasticLoadBalancersResponsePrivate(this), parent)
{
    setRequest(new DescribeElasticLoadBalancersRequest(request));
    setReply(reply);
}

const DescribeElasticLoadBalancersRequest * DescribeElasticLoadBalancersResponse::request() const
{
    Q_D(const DescribeElasticLoadBalancersResponse);
    return static_cast<const DescribeElasticLoadBalancersRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeElasticLoadBalancers response.
 *
 * @param  response  Response to parse.
 */
void DescribeElasticLoadBalancersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeElasticLoadBalancersResponsePrivate
 *
 * @brief  Private implementation for DescribeElasticLoadBalancersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticLoadBalancersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeElasticLoadBalancersResponse instance.
 */
DescribeElasticLoadBalancersResponsePrivate::DescribeElasticLoadBalancersResponsePrivate(
    DescribeElasticLoadBalancersResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeElasticLoadBalancersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeElasticLoadBalancersResponsePrivate::DescribeElasticLoadBalancersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeElasticLoadBalancersResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
