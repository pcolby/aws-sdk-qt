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

#include "updateskillgroupresponse.h"
#include "updateskillgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  UpdateSkillGroupResponse
 *
 * @brief  Handles AlexaForBusiness UpdateSkillGroup responses.
 *
 * @see    AlexaForBusinessClient::updateSkillGroup
 */

/**
 * @brief  Constructs a new UpdateSkillGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSkillGroupResponse::UpdateSkillGroupResponse(
        const UpdateSkillGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new UpdateSkillGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateSkillGroupRequest(request));
    setReply(reply);
}

const UpdateSkillGroupRequest * UpdateSkillGroupResponse::request() const
{
    Q_D(const UpdateSkillGroupResponse);
    return static_cast<const UpdateSkillGroupRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness UpdateSkillGroup response.
 *
 * @param  response  Response to parse.
 */
void UpdateSkillGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateSkillGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSkillGroupResponsePrivate
 *
 * @brief  Private implementation for UpdateSkillGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSkillGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSkillGroupResponse instance.
 */
UpdateSkillGroupResponsePrivate::UpdateSkillGroupResponsePrivate(
    UpdateSkillGroupResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness UpdateSkillGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSkillGroupResponsePrivate::UpdateSkillGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSkillGroupResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
