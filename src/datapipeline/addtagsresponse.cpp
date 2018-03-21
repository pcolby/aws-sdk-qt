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

#include "addtagsresponse.h"
#include "addtagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DataPipeline {

/**
 * @class  AddTagsResponse
 *
 * @brief  Handles DataPipeline AddTags responses.
 *
 * @see    DataPipelineClient::addTags
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddTagsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new AddTagsResponsePrivate(this), parent)
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
 * @brief  Parse a DataPipeline AddTags response.
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
 * @brief  Parse an DataPipeline AddTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddTagsResponsePrivate::AddTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddTagsResponse"));
    /// @todo
}
