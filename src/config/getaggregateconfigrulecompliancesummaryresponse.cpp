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

#include "getaggregateconfigrulecompliancesummaryresponse.h"
#include "getaggregateconfigrulecompliancesummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  GetAggregateConfigRuleComplianceSummaryResponse
 *
 * @brief  Handles ConfigService GetAggregateConfigRuleComplianceSummary responses.
 *
 * @see    ConfigServiceClient::getAggregateConfigRuleComplianceSummary
 */

/**
 * @brief  Constructs a new GetAggregateConfigRuleComplianceSummaryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAggregateConfigRuleComplianceSummaryResponse::GetAggregateConfigRuleComplianceSummaryResponse(
        const GetAggregateConfigRuleComplianceSummaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new GetAggregateConfigRuleComplianceSummaryResponsePrivate(this), parent)
{
    setRequest(new GetAggregateConfigRuleComplianceSummaryRequest(request));
    setReply(reply);
}

const GetAggregateConfigRuleComplianceSummaryRequest * GetAggregateConfigRuleComplianceSummaryResponse::request() const
{
    Q_D(const GetAggregateConfigRuleComplianceSummaryResponse);
    return static_cast<const GetAggregateConfigRuleComplianceSummaryRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService GetAggregateConfigRuleComplianceSummary response.
 *
 * @param  response  Response to parse.
 */
void GetAggregateConfigRuleComplianceSummaryResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAggregateConfigRuleComplianceSummaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAggregateConfigRuleComplianceSummaryResponsePrivate
 *
 * @brief  Private implementation for GetAggregateConfigRuleComplianceSummaryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAggregateConfigRuleComplianceSummaryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAggregateConfigRuleComplianceSummaryResponse instance.
 */
GetAggregateConfigRuleComplianceSummaryResponsePrivate::GetAggregateConfigRuleComplianceSummaryResponsePrivate(
    GetAggregateConfigRuleComplianceSummaryResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService GetAggregateConfigRuleComplianceSummaryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAggregateConfigRuleComplianceSummaryResponsePrivate::parseGetAggregateConfigRuleComplianceSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAggregateConfigRuleComplianceSummaryResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
