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

#include "deletestreamresponse.h"
#include "deletestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KinesisVideo {

/**
 * @class  DeleteStreamResponse
 *
 * @brief  Handles KinesisVideo DeleteStream responses.
 *
 * @see    KinesisVideoClient::deleteStream
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteStreamResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new DeleteStreamResponsePrivate(this), parent)
{
    setRequest(new DeleteStreamRequest(request));
    setReply(reply);
}

const DeleteStreamRequest * DeleteStreamResponse::request() const
{
    Q_D(const DeleteStreamResponse);
    return static_cast<const DeleteStreamRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisVideo DeleteStream response.
 *
 * @param  response  Response to parse.
 */
void DeleteStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteStreamResponsePrivate
 *
 * @brief  Private implementation for DeleteStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteStreamResponse instance.
 */
DeleteStreamResponsePrivate::DeleteStreamResponsePrivate(
    DeleteStreamQueueResponse * const q) : DeleteStreamPrivate(q)
{

}

/**
 * @brief  Parse an KinesisVideo DeleteStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteStreamResponsePrivate::DeleteStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStreamResponse"));
    /// @todo
}
