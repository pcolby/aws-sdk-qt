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

#include "disassociatememberfromgroupresponse.h"
#include "disassociatememberfromgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkMail {

/**
 * @class  DisassociateMemberFromGroupResponse
 *
 * @brief  Handles WorkMail DisassociateMemberFromGroup responses.
 *
 * @see    WorkMailClient::disassociateMemberFromGroup
 */

/**
 * @brief  Constructs a new DisassociateMemberFromGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateMemberFromGroupResponse::DisassociateMemberFromGroupResponse(
        const DisassociateMemberFromGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new DisassociateMemberFromGroupResponsePrivate(this), parent)
{
    setRequest(new DisassociateMemberFromGroupRequest(request));
    setReply(reply);
}

const DisassociateMemberFromGroupRequest * DisassociateMemberFromGroupResponse::request() const
{
    Q_D(const DisassociateMemberFromGroupResponse);
    return static_cast<const DisassociateMemberFromGroupRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail DisassociateMemberFromGroup response.
 *
 * @param  response  Response to parse.
 */
void DisassociateMemberFromGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateMemberFromGroupResponsePrivate
 *
 * @brief  Private implementation for DisassociateMemberFromGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateMemberFromGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateMemberFromGroupResponse instance.
 */
DisassociateMemberFromGroupResponsePrivate::DisassociateMemberFromGroupResponsePrivate(
    DisassociateMemberFromGroupQueueResponse * const q) : DisassociateMemberFromGroupPrivate(q)
{

}

/**
 * @brief  Parse an WorkMail DisassociateMemberFromGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateMemberFromGroupResponsePrivate::DisassociateMemberFromGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateMemberFromGroupResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace AWS
