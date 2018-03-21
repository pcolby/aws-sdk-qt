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

#include "gettagsresponse.h"
#include "gettagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ResourceGroups {

/**
 * @class  GetTagsResponse
 *
 * @brief  Handles ResourceGroups GetTags responses.
 *
 * @see    ResourceGroupsClient::getTags
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTagsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsResponse(new GetTagsResponsePrivate(this), parent)
{
    setRequest(new GetTagsRequest(request));
    setReply(reply);
}

const GetTagsRequest * GetTagsResponse::request() const
{
    Q_D(const GetTagsResponse);
    return static_cast<const GetTagsRequest *>(d->request);
}

/**
 * @brief  Parse a ResourceGroups GetTags response.
 *
 * @param  response  Response to parse.
 */
void GetTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetTagsResponsePrivate
 *
 * @brief  Private implementation for GetTagsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetTagsResponse instance.
 */
GetTagsResponsePrivate::GetTagsResponsePrivate(
    GetTagsQueueResponse * const q) : GetTagsPrivate(q)
{

}

/**
 * @brief  Parse an ResourceGroups GetTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetTagsResponsePrivate::GetTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTagsResponse"));
    /// @todo
}
