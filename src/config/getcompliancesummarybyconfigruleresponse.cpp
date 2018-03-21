/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getcompliancesummarybyconfigruleresponse.h"
#include "getcompliancesummarybyconfigruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ConfigService {

/**
 * @class  GetComplianceSummaryByConfigRuleResponse
 *
 * @brief  Handles ConfigService GetComplianceSummaryByConfigRule responses.
 *
 * @see    ConfigServiceClient::getComplianceSummaryByConfigRule
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetComplianceSummaryByConfigRuleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new GetComplianceSummaryByConfigRuleResponsePrivate(this), parent)
{
    setRequest(new GetComplianceSummaryByConfigRuleRequest(request));
    setReply(reply);
}

const GetComplianceSummaryByConfigRuleRequest * GetComplianceSummaryByConfigRuleResponse::request() const
{
    Q_D(const GetComplianceSummaryByConfigRuleResponse);
    return static_cast<const GetComplianceSummaryByConfigRuleRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService GetComplianceSummaryByConfigRule response.
 *
 * @param  response  Response to parse.
 */
void GetComplianceSummaryByConfigRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetComplianceSummaryByConfigRuleResponsePrivate
 *
 * @brief  Private implementation for GetComplianceSummaryByConfigRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetComplianceSummaryByConfigRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetComplianceSummaryByConfigRuleResponse instance.
 */
GetComplianceSummaryByConfigRuleResponsePrivate::GetComplianceSummaryByConfigRuleResponsePrivate(
    GetComplianceSummaryByConfigRuleQueueResponse * const q) : GetComplianceSummaryByConfigRulePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService GetComplianceSummaryByConfigRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetComplianceSummaryByConfigRuleResponsePrivate::GetComplianceSummaryByConfigRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetComplianceSummaryByConfigRuleResponse"));
    /// @todo
}
