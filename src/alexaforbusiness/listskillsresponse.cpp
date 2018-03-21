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

#include "listskillsresponse.h"
#include "listskillsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  ListSkillsResponse
 *
 * @brief  Handles AlexaForBusiness ListSkills responses.
 *
 * @see    AlexaForBusinessClient::listSkills
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSkillsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new ListSkillsResponsePrivate(this), parent)
{
    setRequest(new ListSkillsRequest(request));
    setReply(reply);
}

const ListSkillsRequest * ListSkillsResponse::request() const
{
    Q_D(const ListSkillsResponse);
    return static_cast<const ListSkillsRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness ListSkills response.
 *
 * @param  response  Response to parse.
 */
void ListSkillsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSkillsResponsePrivate
 *
 * @brief  Private implementation for ListSkillsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSkillsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSkillsResponse instance.
 */
ListSkillsResponsePrivate::ListSkillsResponsePrivate(
    ListSkillsQueueResponse * const q) : ListSkillsPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness ListSkillsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSkillsResponsePrivate::ListSkillsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSkillsResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace AWS
