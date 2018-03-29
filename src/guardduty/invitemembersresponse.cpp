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

#include "invitemembersresponse.h"
#include "invitemembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/**
 * @class  InviteMembersResponse
 *
 * @brief  Handles GuardDuty InviteMembers responses.
 *
 * @see    GuardDutyClient::inviteMembers
 */

/**
 * @brief  Constructs a new InviteMembersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InviteMembersResponse::InviteMembersResponse(
        const InviteMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new InviteMembersResponsePrivate(this), parent)
{
    setRequest(new InviteMembersRequest(request));
    setReply(reply);
}

const InviteMembersRequest * InviteMembersResponse::request() const
{
    Q_D(const InviteMembersResponse);
    return static_cast<const InviteMembersRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty InviteMembers response.
 *
 * @param  response  Response to parse.
 */
void InviteMembersResponse::parseSuccess(QIODevice &response)
{
    Q_D(InviteMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  InviteMembersResponsePrivate
 *
 * @brief  Private implementation for InviteMembersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InviteMembersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InviteMembersResponse instance.
 */
InviteMembersResponsePrivate::InviteMembersResponsePrivate(
    InviteMembersResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty InviteMembersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void InviteMembersResponsePrivate::InviteMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InviteMembersResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
