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

#include "describesslpoliciesresponse.h"
#include "describesslpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeSSLPoliciesResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 DescribeSSLPolicies responses.
 *
 * @see    ElasticLoadBalancingv2Client::describeSSLPolicies
 */

/**
 * @brief  Constructs a new DescribeSSLPoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSSLPoliciesResponse::DescribeSSLPoliciesResponse(
        const DescribeSSLPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new DescribeSSLPoliciesResponsePrivate(this), parent)
{
    setRequest(new DescribeSSLPoliciesRequest(request));
    setReply(reply);
}

const DescribeSSLPoliciesRequest * DescribeSSLPoliciesResponse::request() const
{
    Q_D(const DescribeSSLPoliciesResponse);
    return static_cast<const DescribeSSLPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 DescribeSSLPolicies response.
 *
 * @param  response  Response to parse.
 */
void DescribeSSLPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeSSLPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSSLPoliciesResponsePrivate
 *
 * @brief  Private implementation for DescribeSSLPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSSLPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSSLPoliciesResponse instance.
 */
DescribeSSLPoliciesResponsePrivate::DescribeSSLPoliciesResponsePrivate(
    DescribeSSLPoliciesResponse * const q) : ElasticLoadBalancingv2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 DescribeSSLPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSSLPoliciesResponsePrivate::DescribeSSLPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSSLPoliciesResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
