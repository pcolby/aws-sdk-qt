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

#include "getcompliancesummarybyconfigruleresponse.h"
#include "getcompliancesummarybyconfigruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  GetComplianceSummaryByConfigRuleResponse
 *
 * @brief  Handles ConfigService GetComplianceSummaryByConfigRule responses.
 *
 * @see    ConfigServiceClient::getComplianceSummaryByConfigRule
 */

/**
 * @brief  Constructs a new GetComplianceSummaryByConfigRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetComplianceSummaryByConfigRuleResponse::GetComplianceSummaryByConfigRuleResponse(
        const GetComplianceSummaryByConfigRuleRequest &request,
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
    Q_D(GetComplianceSummaryByConfigRuleResponse);
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
    GetComplianceSummaryByConfigRuleResponse * const q) : ConfigServiceResponsePrivate(q)
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

} // namespace ConfigService
} // namespace QtAws
