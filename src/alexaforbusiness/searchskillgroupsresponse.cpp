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

#include "searchskillgroupsresponse.h"
#include "searchskillgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  SearchSkillGroupsResponse
 *
 * @brief  Handles AlexaForBusiness SearchSkillGroups responses.
 *
 * @see    AlexaForBusinessClient::searchSkillGroups
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchSkillGroupsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SearchSkillGroupsResponsePrivate(this), parent)
{
    setRequest(new SearchSkillGroupsRequest(request));
    setReply(reply);
}

const SearchSkillGroupsRequest * SearchSkillGroupsResponse::request() const
{
    Q_D(const SearchSkillGroupsResponse);
    return static_cast<const SearchSkillGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness SearchSkillGroups response.
 *
 * @param  response  Response to parse.
 */
void SearchSkillGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchSkillGroupsResponsePrivate
 *
 * @brief  Private implementation for SearchSkillGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchSkillGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchSkillGroupsResponse instance.
 */
SearchSkillGroupsResponsePrivate::SearchSkillGroupsResponsePrivate(
    SearchSkillGroupsQueueResponse * const q) : SearchSkillGroupsPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness SearchSkillGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchSkillGroupsResponsePrivate::SearchSkillGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchSkillGroupsResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace AWS
