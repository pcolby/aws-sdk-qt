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

#include "disassociatemembersresponse.h"
#include "disassociatemembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  DisassociateMembersResponse
 *
 * @brief  Handles GuardDuty DisassociateMembers responses.
 *
 * @see    GuardDutyClient::disassociateMembers
 */

/**
 * @brief  Constructs a new DisassociateMembersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateMembersResponse::DisassociateMembersResponse(
        const DisassociateMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DisassociateMembersResponsePrivate(this), parent)
{
    setRequest(new DisassociateMembersRequest(request));
    setReply(reply);
}

const DisassociateMembersRequest * DisassociateMembersResponse::request() const
{
    Q_D(const DisassociateMembersResponse);
    return static_cast<const DisassociateMembersRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty DisassociateMembers response.
 *
 * @param  response  Response to parse.
 */
void DisassociateMembersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateMembersResponsePrivate
 *
 * @brief  Private implementation for DisassociateMembersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateMembersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateMembersResponse instance.
 */
DisassociateMembersResponsePrivate::DisassociateMembersResponsePrivate(
    DisassociateMembersQueueResponse * const q) : DisassociateMembersPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty DisassociateMembersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateMembersResponsePrivate::DisassociateMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateMembersResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace AWS
