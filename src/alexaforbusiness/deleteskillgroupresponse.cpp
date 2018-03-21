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

#include "deleteskillgroupresponse.h"
#include "deleteskillgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  DeleteSkillGroupResponse
 *
 * @brief  Handles AlexaForBusiness DeleteSkillGroup responses.
 *
 * @see    AlexaForBusinessClient::deleteSkillGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSkillGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteSkillGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteSkillGroupRequest(request));
    setReply(reply);
}

const DeleteSkillGroupRequest * DeleteSkillGroupResponse::request() const
{
    Q_D(const DeleteSkillGroupResponse);
    return static_cast<const DeleteSkillGroupRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness DeleteSkillGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteSkillGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSkillGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteSkillGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSkillGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSkillGroupResponse instance.
 */
DeleteSkillGroupResponsePrivate::DeleteSkillGroupResponsePrivate(
    DeleteSkillGroupQueueResponse * const q) : DeleteSkillGroupPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness DeleteSkillGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSkillGroupResponsePrivate::DeleteSkillGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSkillGroupResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace AWS
