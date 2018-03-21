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

#include "createskillgroupresponse.h"
#include "createskillgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  CreateSkillGroupResponse
 *
 * @brief  Handles AlexaForBusiness CreateSkillGroup responses.
 *
 * @see    AlexaForBusinessClient::createSkillGroup
 */

/**
 * @brief  Constructs a new CreateSkillGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSkillGroupResponse::CreateSkillGroupResponse(
        const CreateSkillGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new CreateSkillGroupResponsePrivate(this), parent)
{
    setRequest(new CreateSkillGroupRequest(request));
    setReply(reply);
}

const CreateSkillGroupRequest * CreateSkillGroupResponse::request() const
{
    Q_D(const CreateSkillGroupResponse);
    return static_cast<const CreateSkillGroupRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness CreateSkillGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateSkillGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSkillGroupResponsePrivate
 *
 * @brief  Private implementation for CreateSkillGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSkillGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSkillGroupResponse instance.
 */
CreateSkillGroupResponsePrivate::CreateSkillGroupResponsePrivate(
    CreateSkillGroupQueueResponse * const q) : CreateSkillGroupPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness CreateSkillGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSkillGroupResponsePrivate::CreateSkillGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSkillGroupResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace AWS
