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

#include "listactivatedrulesinrulegroupresponse.h"
#include "listactivatedrulesinrulegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  ListActivatedRulesInRuleGroupResponse
 *
 * @brief  Handles WAFRegional ListActivatedRulesInRuleGroup responses.
 *
 * @see    WAFRegionalClient::listActivatedRulesInRuleGroup
 */

/**
 * @brief  Constructs a new ListActivatedRulesInRuleGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListActivatedRulesInRuleGroupResponse::ListActivatedRulesInRuleGroupResponse(
        const ListActivatedRulesInRuleGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListActivatedRulesInRuleGroupResponsePrivate(this), parent)
{
    setRequest(new ListActivatedRulesInRuleGroupRequest(request));
    setReply(reply);
}

const ListActivatedRulesInRuleGroupRequest * ListActivatedRulesInRuleGroupResponse::request() const
{
    Q_D(const ListActivatedRulesInRuleGroupResponse);
    return static_cast<const ListActivatedRulesInRuleGroupRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional ListActivatedRulesInRuleGroup response.
 *
 * @param  response  Response to parse.
 */
void ListActivatedRulesInRuleGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListActivatedRulesInRuleGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListActivatedRulesInRuleGroupResponsePrivate
 *
 * @brief  Private implementation for ListActivatedRulesInRuleGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListActivatedRulesInRuleGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListActivatedRulesInRuleGroupResponse instance.
 */
ListActivatedRulesInRuleGroupResponsePrivate::ListActivatedRulesInRuleGroupResponsePrivate(
    ListActivatedRulesInRuleGroupResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional ListActivatedRulesInRuleGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListActivatedRulesInRuleGroupResponsePrivate::parseListActivatedRulesInRuleGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListActivatedRulesInRuleGroupResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
