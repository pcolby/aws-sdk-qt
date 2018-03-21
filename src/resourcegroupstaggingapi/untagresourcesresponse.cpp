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

#include "untagresourcesresponse.h"
#include "untagresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ResourceGroupsTaggingAPI {

/**
 * @class  UntagResourcesResponse
 *
 * @brief  Handles ResourceGroupsTaggingAPI UntagResources responses.
 *
 * @see    ResourceGroupsTaggingAPIClient::untagResources
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UntagResourcesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingAPIResponse(new UntagResourcesResponsePrivate(this), parent)
{
    setRequest(new UntagResourcesRequest(request));
    setReply(reply);
}

const UntagResourcesRequest * UntagResourcesResponse::request() const
{
    Q_D(const UntagResourcesResponse);
    return static_cast<const UntagResourcesRequest *>(d->request);
}

/**
 * @brief  Parse a ResourceGroupsTaggingAPI UntagResources response.
 *
 * @param  response  Response to parse.
 */
void UntagResourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UntagResourcesResponsePrivate
 *
 * @brief  Private implementation for UntagResourcesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagResourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UntagResourcesResponse instance.
 */
UntagResourcesResponsePrivate::UntagResourcesResponsePrivate(
    UntagResourcesQueueResponse * const q) : UntagResourcesPrivate(q)
{

}

/**
 * @brief  Parse an ResourceGroupsTaggingAPI UntagResourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UntagResourcesResponsePrivate::UntagResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagResourcesResponse"));
    /// @todo
}
