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

#include "getaggregatecompliancedetailsbyconfigruleresponse.h"
#include "getaggregatecompliancedetailsbyconfigruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  GetAggregateComplianceDetailsByConfigRuleResponse
 *
 * @brief  Handles ConfigService GetAggregateComplianceDetailsByConfigRule responses.
 *
 * @see    ConfigServiceClient::getAggregateComplianceDetailsByConfigRule
 */

/**
 * @brief  Constructs a new GetAggregateComplianceDetailsByConfigRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAggregateComplianceDetailsByConfigRuleResponse::GetAggregateComplianceDetailsByConfigRuleResponse(
        const GetAggregateComplianceDetailsByConfigRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new GetAggregateComplianceDetailsByConfigRuleResponsePrivate(this), parent)
{
    setRequest(new GetAggregateComplianceDetailsByConfigRuleRequest(request));
    setReply(reply);
}

const GetAggregateComplianceDetailsByConfigRuleRequest * GetAggregateComplianceDetailsByConfigRuleResponse::request() const
{
    Q_D(const GetAggregateComplianceDetailsByConfigRuleResponse);
    return static_cast<const GetAggregateComplianceDetailsByConfigRuleRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService GetAggregateComplianceDetailsByConfigRule response.
 *
 * @param  response  Response to parse.
 */
void GetAggregateComplianceDetailsByConfigRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAggregateComplianceDetailsByConfigRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAggregateComplianceDetailsByConfigRuleResponsePrivate
 *
 * @brief  Private implementation for GetAggregateComplianceDetailsByConfigRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAggregateComplianceDetailsByConfigRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAggregateComplianceDetailsByConfigRuleResponse instance.
 */
GetAggregateComplianceDetailsByConfigRuleResponsePrivate::GetAggregateComplianceDetailsByConfigRuleResponsePrivate(
    GetAggregateComplianceDetailsByConfigRuleResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService GetAggregateComplianceDetailsByConfigRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAggregateComplianceDetailsByConfigRuleResponsePrivate::parseGetAggregateComplianceDetailsByConfigRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAggregateComplianceDetailsByConfigRuleResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
