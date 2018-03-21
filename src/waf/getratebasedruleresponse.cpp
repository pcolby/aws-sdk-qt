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

#include "getratebasedruleresponse.h"
#include "getratebasedruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  GetRateBasedRuleResponse
 *
 * @brief  Handles WAF GetRateBasedRule responses.
 *
 * @see    WAFClient::getRateBasedRule
 */

/**
 * @brief  Constructs a new GetRateBasedRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRateBasedRuleResponse::GetRateBasedRuleResponse(
        const GetRateBasedRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new GetRateBasedRuleResponsePrivate(this), parent)
{
    setRequest(new GetRateBasedRuleRequest(request));
    setReply(reply);
}

const GetRateBasedRuleRequest * GetRateBasedRuleResponse::request() const
{
    Q_D(const GetRateBasedRuleResponse);
    return static_cast<const GetRateBasedRuleRequest *>(d->request);
}

/**
 * @brief  Parse a WAF GetRateBasedRule response.
 *
 * @param  response  Response to parse.
 */
void GetRateBasedRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRateBasedRuleResponsePrivate
 *
 * @brief  Private implementation for GetRateBasedRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRateBasedRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRateBasedRuleResponse instance.
 */
GetRateBasedRuleResponsePrivate::GetRateBasedRuleResponsePrivate(
    GetRateBasedRuleQueueResponse * const q) : GetRateBasedRulePrivate(q)
{

}

/**
 * @brief  Parse an WAF GetRateBasedRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRateBasedRuleResponsePrivate::GetRateBasedRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRateBasedRuleResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
