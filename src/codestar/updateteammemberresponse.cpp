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

#include "updateteammemberresponse.h"
#include "updateteammemberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeStar {

/**
 * @class  UpdateTeamMemberResponse
 *
 * @brief  Handles CodeStar UpdateTeamMember responses.
 *
 * @see    CodeStarClient::updateTeamMember
 */

/**
 * @brief  Constructs a new UpdateTeamMemberResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTeamMemberResponse::UpdateTeamMemberResponse(
        const UpdateTeamMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeStarResponse(new UpdateTeamMemberResponsePrivate(this), parent)
{
    setRequest(new UpdateTeamMemberRequest(request));
    setReply(reply);
}

const UpdateTeamMemberRequest * UpdateTeamMemberResponse::request() const
{
    Q_D(const UpdateTeamMemberResponse);
    return static_cast<const UpdateTeamMemberRequest *>(d->request);
}

/**
 * @brief  Parse a CodeStar UpdateTeamMember response.
 *
 * @param  response  Response to parse.
 */
void UpdateTeamMemberResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateTeamMemberResponsePrivate
 *
 * @brief  Private implementation for UpdateTeamMemberResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTeamMemberResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateTeamMemberResponse instance.
 */
UpdateTeamMemberResponsePrivate::UpdateTeamMemberResponsePrivate(
    UpdateTeamMemberQueueResponse * const q) : UpdateTeamMemberPrivate(q)
{

}

/**
 * @brief  Parse an CodeStar UpdateTeamMemberResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateTeamMemberResponsePrivate::UpdateTeamMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTeamMemberResponse"));
    /// @todo
}

} // namespace CodeStar
} // namespace AWS
