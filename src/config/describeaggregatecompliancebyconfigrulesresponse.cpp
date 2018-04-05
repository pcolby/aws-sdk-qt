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

#include "describeaggregatecompliancebyconfigrulesresponse.h"
#include "describeaggregatecompliancebyconfigrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribeAggregateComplianceByConfigRulesResponse
 *
 * @brief  Handles ConfigService DescribeAggregateComplianceByConfigRules responses.
 *
 * @see    ConfigServiceClient::describeAggregateComplianceByConfigRules
 */

/**
 * @brief  Constructs a new DescribeAggregateComplianceByConfigRulesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAggregateComplianceByConfigRulesResponse::DescribeAggregateComplianceByConfigRulesResponse(
        const DescribeAggregateComplianceByConfigRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DescribeAggregateComplianceByConfigRulesResponsePrivate(this), parent)
{
    setRequest(new DescribeAggregateComplianceByConfigRulesRequest(request));
    setReply(reply);
}

const DescribeAggregateComplianceByConfigRulesRequest * DescribeAggregateComplianceByConfigRulesResponse::request() const
{
    Q_D(const DescribeAggregateComplianceByConfigRulesResponse);
    return static_cast<const DescribeAggregateComplianceByConfigRulesRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DescribeAggregateComplianceByConfigRules response.
 *
 * @param  response  Response to parse.
 */
void DescribeAggregateComplianceByConfigRulesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAggregateComplianceByConfigRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAggregateComplianceByConfigRulesResponsePrivate
 *
 * @brief  Private implementation for DescribeAggregateComplianceByConfigRulesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAggregateComplianceByConfigRulesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAggregateComplianceByConfigRulesResponse instance.
 */
DescribeAggregateComplianceByConfigRulesResponsePrivate::DescribeAggregateComplianceByConfigRulesResponsePrivate(
    DescribeAggregateComplianceByConfigRulesResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DescribeAggregateComplianceByConfigRulesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAggregateComplianceByConfigRulesResponsePrivate::parseDescribeAggregateComplianceByConfigRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAggregateComplianceByConfigRulesResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
