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

#include "removetagsresponse.h"
#include "removetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudTrail {

/**
 * @class  RemoveTagsResponse
 *
 * @brief  Handles CloudTrail RemoveTags responses.
 *
 * @see    CloudTrailClient::removeTags
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveTagsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new RemoveTagsResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsRequest(request));
    setReply(reply);
}

const RemoveTagsRequest * RemoveTagsResponse::request() const
{
    Q_D(const RemoveTagsResponse);
    return static_cast<const RemoveTagsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudTrail RemoveTags response.
 *
 * @param  response  Response to parse.
 */
void RemoveTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveTagsResponsePrivate
 *
 * @brief  Private implementation for RemoveTagsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveTagsResponse instance.
 */
RemoveTagsResponsePrivate::RemoveTagsResponsePrivate(
    RemoveTagsQueueResponse * const q) : RemoveTagsPrivate(q)
{

}

/**
 * @brief  Parse an CloudTrail RemoveTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveTagsResponsePrivate::RemoveTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsResponse"));
    /// @todo
}
