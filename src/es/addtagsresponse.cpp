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

#include "addtagsresponse.h"
#include "addtagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticsearchService {

/**
 * @class  AddTagsResponse
 *
 * @brief  Handles ElasticsearchService AddTags responses.
 *
 * @see    ElasticsearchServiceClient::addTags
 */

/**
 * @brief  Constructs a new AddTagsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddTagsResponse::AddTagsResponse(
        const AddTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new AddTagsResponsePrivate(this), parent)
{
    setRequest(new AddTagsRequest(request));
    setReply(reply);
}

const AddTagsRequest * AddTagsResponse::request() const
{
    Q_D(const AddTagsResponse);
    return static_cast<const AddTagsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticsearchService AddTags response.
 *
 * @param  response  Response to parse.
 */
void AddTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddTagsResponsePrivate
 *
 * @brief  Private implementation for AddTagsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddTagsResponse instance.
 */
AddTagsResponsePrivate::AddTagsResponsePrivate(
    AddTagsQueueResponse * const q) : AddTagsPrivate(q)
{

}

/**
 * @brief  Parse an ElasticsearchService AddTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddTagsResponsePrivate::AddTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddTagsResponse"));
    /// @todo
}

} // namespace ElasticsearchService
} // namespace AWS
