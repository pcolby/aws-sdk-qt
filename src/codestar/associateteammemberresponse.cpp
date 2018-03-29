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

#include "associateteammemberresponse.h"
#include "associateteammemberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeStar {

/**
 * @class  AssociateTeamMemberResponse
 *
 * @brief  Handles CodeStar AssociateTeamMember responses.
 *
 * @see    CodeStarClient::associateTeamMember
 */

/**
 * @brief  Constructs a new AssociateTeamMemberResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateTeamMemberResponse::AssociateTeamMemberResponse(
        const AssociateTeamMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeStarResponse(new AssociateTeamMemberResponsePrivate(this), parent)
{
    setRequest(new AssociateTeamMemberRequest(request));
    setReply(reply);
}

const AssociateTeamMemberRequest * AssociateTeamMemberResponse::request() const
{
    Q_D(const AssociateTeamMemberResponse);
    return static_cast<const AssociateTeamMemberRequest *>(d->request);
}

/**
 * @brief  Parse a CodeStar AssociateTeamMember response.
 *
 * @param  response  Response to parse.
 */
void AssociateTeamMemberResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateTeamMemberResponsePrivate
 *
 * @brief  Private implementation for AssociateTeamMemberResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateTeamMemberResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateTeamMemberResponse instance.
 */
AssociateTeamMemberResponsePrivate::AssociateTeamMemberResponsePrivate(
    AssociateTeamMemberQueueResponse * const q) : AssociateTeamMemberPrivate(q)
{

}

/**
 * @brief  Parse an CodeStar AssociateTeamMemberResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateTeamMemberResponsePrivate::AssociateTeamMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateTeamMemberResponse"));
    /// @todo
}

} // namespace CodeStar
} // namespace QtAws
