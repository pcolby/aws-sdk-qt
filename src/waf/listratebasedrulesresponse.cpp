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

#include "listratebasedrulesresponse.h"
#include "listratebasedrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  ListRateBasedRulesResponse
 *
 * @brief  Handles WAF ListRateBasedRules responses.
 *
 * @see    WAFClient::listRateBasedRules
 */

/**
 * @brief  Constructs a new ListRateBasedRulesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRateBasedRulesResponse::ListRateBasedRulesResponse(
        const ListRateBasedRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new ListRateBasedRulesResponsePrivate(this), parent)
{
    setRequest(new ListRateBasedRulesRequest(request));
    setReply(reply);
}

const ListRateBasedRulesRequest * ListRateBasedRulesResponse::request() const
{
    Q_D(const ListRateBasedRulesResponse);
    return static_cast<const ListRateBasedRulesRequest *>(d->request);
}

/**
 * @brief  Parse a WAF ListRateBasedRules response.
 *
 * @param  response  Response to parse.
 */
void ListRateBasedRulesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRateBasedRulesResponsePrivate
 *
 * @brief  Private implementation for ListRateBasedRulesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRateBasedRulesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRateBasedRulesResponse instance.
 */
ListRateBasedRulesResponsePrivate::ListRateBasedRulesResponsePrivate(
    ListRateBasedRulesQueueResponse * const q) : ListRateBasedRulesPrivate(q)
{

}

/**
 * @brief  Parse an WAF ListRateBasedRulesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRateBasedRulesResponsePrivate::ListRateBasedRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRateBasedRulesResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
