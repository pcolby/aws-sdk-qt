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

#include "disassociateskillgroupfromroomresponse.h"
#include "disassociateskillgroupfromroomresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  DisassociateSkillGroupFromRoomResponse
 *
 * @brief  Handles AlexaForBusiness DisassociateSkillGroupFromRoom responses.
 *
 * @see    AlexaForBusinessClient::disassociateSkillGroupFromRoom
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateSkillGroupFromRoomResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DisassociateSkillGroupFromRoomResponsePrivate(this), parent)
{
    setRequest(new DisassociateSkillGroupFromRoomRequest(request));
    setReply(reply);
}

const DisassociateSkillGroupFromRoomRequest * DisassociateSkillGroupFromRoomResponse::request() const
{
    Q_D(const DisassociateSkillGroupFromRoomResponse);
    return static_cast<const DisassociateSkillGroupFromRoomRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness DisassociateSkillGroupFromRoom response.
 *
 * @param  response  Response to parse.
 */
void DisassociateSkillGroupFromRoomResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateSkillGroupFromRoomResponsePrivate
 *
 * @brief  Private implementation for DisassociateSkillGroupFromRoomResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateSkillGroupFromRoomResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateSkillGroupFromRoomResponse instance.
 */
DisassociateSkillGroupFromRoomResponsePrivate::DisassociateSkillGroupFromRoomResponsePrivate(
    DisassociateSkillGroupFromRoomQueueResponse * const q) : DisassociateSkillGroupFromRoomPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness DisassociateSkillGroupFromRoomResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateSkillGroupFromRoomResponsePrivate::DisassociateSkillGroupFromRoomResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateSkillGroupFromRoomResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace AWS
