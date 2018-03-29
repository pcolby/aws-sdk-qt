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

#include "createrulegroupresponse.h"
#include "createrulegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  CreateRuleGroupResponse
 *
 * @brief  Handles WAF CreateRuleGroup responses.
 *
 * @see    WAFClient::createRuleGroup
 */

/**
 * @brief  Constructs a new CreateRuleGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRuleGroupResponse::CreateRuleGroupResponse(
        const CreateRuleGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new CreateRuleGroupResponsePrivate(this), parent)
{
    setRequest(new CreateRuleGroupRequest(request));
    setReply(reply);
}

const CreateRuleGroupRequest * CreateRuleGroupResponse::request() const
{
    Q_D(const CreateRuleGroupResponse);
    return static_cast<const CreateRuleGroupRequest *>(d->request);
}

/**
 * @brief  Parse a WAF CreateRuleGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateRuleGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateRuleGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateRuleGroupResponsePrivate
 *
 * @brief  Private implementation for CreateRuleGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRuleGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateRuleGroupResponse instance.
 */
CreateRuleGroupResponsePrivate::CreateRuleGroupResponsePrivate(
    CreateRuleGroupResponse * const q) : WAFResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAF CreateRuleGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateRuleGroupResponsePrivate::CreateRuleGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRuleGroupResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
