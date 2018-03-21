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

#include "tagresourcesresponse.h"
#include "tagresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ResourceGroupsTaggingAPI {

/**
 * @class  TagResourcesResponse
 *
 * @brief  Handles ResourceGroupsTaggingAPI TagResources responses.
 *
 * @see    ResourceGroupsTaggingAPIClient::tagResources
 */

/**
 * @brief  Constructs a new TagResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TagResourcesResponse::TagResourcesResponse(
        const TagResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingAPIResponse(new TagResourcesResponsePrivate(this), parent)
{
    setRequest(new TagResourcesRequest(request));
    setReply(reply);
}

const TagResourcesRequest * TagResourcesResponse::request() const
{
    Q_D(const TagResourcesResponse);
    return static_cast<const TagResourcesRequest *>(d->request);
}

/**
 * @brief  Parse a ResourceGroupsTaggingAPI TagResources response.
 *
 * @param  response  Response to parse.
 */
void TagResourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TagResourcesResponsePrivate
 *
 * @brief  Private implementation for TagResourcesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TagResourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TagResourcesResponse instance.
 */
TagResourcesResponsePrivate::TagResourcesResponsePrivate(
    TagResourcesQueueResponse * const q) : TagResourcesPrivate(q)
{

}

/**
 * @brief  Parse an ResourceGroupsTaggingAPI TagResourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TagResourcesResponsePrivate::TagResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagResourcesResponse"));
    /// @todo
}

} // namespace ResourceGroupsTaggingAPI
} // namespace AWS
