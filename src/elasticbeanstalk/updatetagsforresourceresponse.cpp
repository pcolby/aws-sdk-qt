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

#include "updatetagsforresourceresponse.h"
#include "updatetagsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  UpdateTagsForResourceResponse
 *
 * @brief  Handles ElasticBeanstalk UpdateTagsForResource responses.
 *
 * @see    ElasticBeanstalkClient::updateTagsForResource
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTagsForResourceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new UpdateTagsForResourceResponsePrivate(this), parent)
{
    setRequest(new UpdateTagsForResourceRequest(request));
    setReply(reply);
}

const UpdateTagsForResourceRequest * UpdateTagsForResourceResponse::request() const
{
    Q_D(const UpdateTagsForResourceResponse);
    return static_cast<const UpdateTagsForResourceRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk UpdateTagsForResource response.
 *
 * @param  response  Response to parse.
 */
void UpdateTagsForResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateTagsForResourceResponsePrivate
 *
 * @brief  Private implementation for UpdateTagsForResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTagsForResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateTagsForResourceResponse instance.
 */
UpdateTagsForResourceResponsePrivate::UpdateTagsForResourceResponsePrivate(
    UpdateTagsForResourceQueueResponse * const q) : UpdateTagsForResourcePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk UpdateTagsForResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateTagsForResourceResponsePrivate::UpdateTagsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTagsForResourceResponse"));
    /// @todo
}
