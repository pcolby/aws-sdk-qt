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

#include "associatemembertogroupresponse.h"
#include "associatemembertogroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/**
 * @class  AssociateMemberToGroupResponse
 *
 * @brief  Handles WorkMail AssociateMemberToGroup responses.
 *
 * @see    WorkMailClient::associateMemberToGroup
 */

/**
 * @brief  Constructs a new AssociateMemberToGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateMemberToGroupResponse::AssociateMemberToGroupResponse(
        const AssociateMemberToGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new AssociateMemberToGroupResponsePrivate(this), parent)
{
    setRequest(new AssociateMemberToGroupRequest(request));
    setReply(reply);
}

const AssociateMemberToGroupRequest * AssociateMemberToGroupResponse::request() const
{
    Q_D(const AssociateMemberToGroupResponse);
    return static_cast<const AssociateMemberToGroupRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail AssociateMemberToGroup response.
 *
 * @param  response  Response to parse.
 */
void AssociateMemberToGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateMemberToGroupResponsePrivate
 *
 * @brief  Private implementation for AssociateMemberToGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateMemberToGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateMemberToGroupResponse instance.
 */
AssociateMemberToGroupResponsePrivate::AssociateMemberToGroupResponsePrivate(
    AssociateMemberToGroupQueueResponse * const q) : AssociateMemberToGroupPrivate(q)
{

}

/**
 * @brief  Parse an WorkMail AssociateMemberToGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateMemberToGroupResponsePrivate::AssociateMemberToGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateMemberToGroupResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws
