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

#include "getcompliancedetailsbyconfigruleresponse.h"
#include "getcompliancedetailsbyconfigruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  GetComplianceDetailsByConfigRuleResponse
 *
 * @brief  Handles ConfigService GetComplianceDetailsByConfigRule responses.
 *
 * @see    ConfigServiceClient::getComplianceDetailsByConfigRule
 */

/**
 * @brief  Constructs a new GetComplianceDetailsByConfigRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetComplianceDetailsByConfigRuleResponse::GetComplianceDetailsByConfigRuleResponse(
        const GetComplianceDetailsByConfigRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new GetComplianceDetailsByConfigRuleResponsePrivate(this), parent)
{
    setRequest(new GetComplianceDetailsByConfigRuleRequest(request));
    setReply(reply);
}

const GetComplianceDetailsByConfigRuleRequest * GetComplianceDetailsByConfigRuleResponse::request() const
{
    Q_D(const GetComplianceDetailsByConfigRuleResponse);
    return static_cast<const GetComplianceDetailsByConfigRuleRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService GetComplianceDetailsByConfigRule response.
 *
 * @param  response  Response to parse.
 */
void GetComplianceDetailsByConfigRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetComplianceDetailsByConfigRuleResponsePrivate
 *
 * @brief  Private implementation for GetComplianceDetailsByConfigRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetComplianceDetailsByConfigRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetComplianceDetailsByConfigRuleResponse instance.
 */
GetComplianceDetailsByConfigRuleResponsePrivate::GetComplianceDetailsByConfigRuleResponsePrivate(
    GetComplianceDetailsByConfigRuleQueueResponse * const q) : GetComplianceDetailsByConfigRulePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService GetComplianceDetailsByConfigRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetComplianceDetailsByConfigRuleResponsePrivate::GetComplianceDetailsByConfigRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetComplianceDetailsByConfigRuleResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
