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

#include "tagqueueresponse.h"
#include "tagqueueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SQS {

/**
 * @class  TagQueueResponse
 *
 * @brief  Handles SQS TagQueue responses.
 *
 * @see    SQSClient::tagQueue
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TagQueueResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SQSResponse(new TagQueueResponsePrivate(this), parent)
{
    setRequest(new TagQueueRequest(request));
    setReply(reply);
}

const TagQueueRequest * TagQueueResponse::request() const
{
    Q_D(const TagQueueResponse);
    return static_cast<const TagQueueRequest *>(d->request);
}

/**
 * @brief  Parse a SQS TagQueue response.
 *
 * @param  response  Response to parse.
 */
void TagQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TagQueueResponsePrivate
 *
 * @brief  Private implementation for TagQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TagQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TagQueueResponse instance.
 */
TagQueueResponsePrivate::TagQueueResponsePrivate(
    TagQueueQueueResponse * const q) : TagQueuePrivate(q)
{

}

/**
 * @brief  Parse an SQS TagQueueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TagQueueResponsePrivate::TagQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagQueueResponse"));
    /// @todo
}
