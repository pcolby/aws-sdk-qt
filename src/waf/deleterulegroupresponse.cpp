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

#include "deleterulegroupresponse.h"
#include "deleterulegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  DeleteRuleGroupResponse
 *
 * @brief  Handles WAF DeleteRuleGroup responses.
 *
 * @see    WAFClient::deleteRuleGroup
 */

/**
 * @brief  Constructs a new DeleteRuleGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRuleGroupResponse::DeleteRuleGroupResponse(
        const DeleteRuleGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new DeleteRuleGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteRuleGroupRequest(request));
    setReply(reply);
}

const DeleteRuleGroupRequest * DeleteRuleGroupResponse::request() const
{
    Q_D(const DeleteRuleGroupResponse);
    return static_cast<const DeleteRuleGroupRequest *>(d->request);
}

/**
 * @brief  Parse a WAF DeleteRuleGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteRuleGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteRuleGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRuleGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteRuleGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRuleGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRuleGroupResponse instance.
 */
DeleteRuleGroupResponsePrivate::DeleteRuleGroupResponsePrivate(
    DeleteRuleGroupResponse * const q) : WAFResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAF DeleteRuleGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRuleGroupResponsePrivate::DeleteRuleGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRuleGroupResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
