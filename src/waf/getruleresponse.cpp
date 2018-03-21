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

#include "getruleresponse.h"
#include "getruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  GetRuleResponse
 *
 * @brief  Handles WAF GetRule responses.
 *
 * @see    WAFClient::getRule
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRuleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new GetRuleResponsePrivate(this), parent)
{
    setRequest(new GetRuleRequest(request));
    setReply(reply);
}

const GetRuleRequest * GetRuleResponse::request() const
{
    Q_D(const GetRuleResponse);
    return static_cast<const GetRuleRequest *>(d->request);
}

/**
 * @brief  Parse a WAF GetRule response.
 *
 * @param  response  Response to parse.
 */
void GetRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRuleResponsePrivate
 *
 * @brief  Private implementation for GetRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRuleResponse instance.
 */
GetRuleResponsePrivate::GetRuleResponsePrivate(
    GetRuleQueueResponse * const q) : GetRulePrivate(q)
{

}

/**
 * @brief  Parse an WAF GetRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRuleResponsePrivate::GetRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRuleResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
