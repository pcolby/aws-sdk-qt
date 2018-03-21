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

#include "createorupdatetagsresponse.h"
#include "createorupdatetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  CreateOrUpdateTagsResponse
 *
 * @brief  Handles AutoScaling CreateOrUpdateTags responses.
 *
 * @see    AutoScalingClient::createOrUpdateTags
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateOrUpdateTagsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new CreateOrUpdateTagsResponsePrivate(this), parent)
{
    setRequest(new CreateOrUpdateTagsRequest(request));
    setReply(reply);
}

const CreateOrUpdateTagsRequest * CreateOrUpdateTagsResponse::request() const
{
    Q_D(const CreateOrUpdateTagsResponse);
    return static_cast<const CreateOrUpdateTagsRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling CreateOrUpdateTags response.
 *
 * @param  response  Response to parse.
 */
void CreateOrUpdateTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateOrUpdateTagsResponsePrivate
 *
 * @brief  Private implementation for CreateOrUpdateTagsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateOrUpdateTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateOrUpdateTagsResponse instance.
 */
CreateOrUpdateTagsResponsePrivate::CreateOrUpdateTagsResponsePrivate(
    CreateOrUpdateTagsQueueResponse * const q) : CreateOrUpdateTagsPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling CreateOrUpdateTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateOrUpdateTagsResponsePrivate::CreateOrUpdateTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOrUpdateTagsResponse"));
    /// @todo
}
