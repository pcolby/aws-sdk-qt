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

#include "describerulesresponse.h"
#include "describerulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeRulesResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 DescribeRules responses.
 *
 * @see    ElasticLoadBalancingv2Client::describeRules
 */

/**
 * @brief  Constructs a new DescribeRulesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRulesResponse::DescribeRulesResponse(
        const DescribeRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeRulesResponse(new DescribeRulesResponsePrivate(this), parent)
{
    setRequest(new DescribeRulesRequest(request));
    setReply(reply);
}

const DescribeRulesRequest * DescribeRulesResponse::request() const
{
    Q_D(const DescribeRulesResponse);
    return static_cast<const DescribeRulesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 DescribeRules response.
 *
 * @param  response  Response to parse.
 */
void DescribeRulesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeRulesResponsePrivate
 *
 * @brief  Private implementation for DescribeRulesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRulesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRulesResponse instance.
 */
DescribeRulesResponsePrivate::DescribeRulesResponsePrivate(
    DescribeRulesResponse * const q) : ElasticLoadBalancingv2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 DescribeRulesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRulesResponsePrivate::parseDescribeRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRulesResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
