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

#include "listrulegroupsresponse.h"
#include "listrulegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  ListRuleGroupsResponse
 *
 * @brief  Handles WAF ListRuleGroups responses.
 *
 * @see    WAFClient::listRuleGroups
 */

/**
 * @brief  Constructs a new ListRuleGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRuleGroupsResponse::ListRuleGroupsResponse(
        const ListRuleGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new ListRuleGroupsResponsePrivate(this), parent)
{
    setRequest(new ListRuleGroupsRequest(request));
    setReply(reply);
}

const ListRuleGroupsRequest * ListRuleGroupsResponse::request() const
{
    Q_D(const ListRuleGroupsResponse);
    return static_cast<const ListRuleGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a WAF ListRuleGroups response.
 *
 * @param  response  Response to parse.
 */
void ListRuleGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRuleGroupsResponsePrivate
 *
 * @brief  Private implementation for ListRuleGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRuleGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRuleGroupsResponse instance.
 */
ListRuleGroupsResponsePrivate::ListRuleGroupsResponsePrivate(
    ListRuleGroupsQueueResponse * const q) : ListRuleGroupsPrivate(q)
{

}

/**
 * @brief  Parse an WAF ListRuleGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRuleGroupsResponsePrivate::ListRuleGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRuleGroupsResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
