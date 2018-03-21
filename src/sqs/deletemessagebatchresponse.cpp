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

#include "deletemessagebatchresponse.h"
#include "deletemessagebatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SQS {

/**
 * @class  DeleteMessageBatchResponse
 *
 * @brief  Handles SQS DeleteMessageBatch responses.
 *
 * @see    SQSClient::deleteMessageBatch
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteMessageBatchResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SQSResponse(new DeleteMessageBatchResponsePrivate(this), parent)
{
    setRequest(new DeleteMessageBatchRequest(request));
    setReply(reply);
}

const DeleteMessageBatchRequest * DeleteMessageBatchResponse::request() const
{
    Q_D(const DeleteMessageBatchResponse);
    return static_cast<const DeleteMessageBatchRequest *>(d->request);
}

/**
 * @brief  Parse a SQS DeleteMessageBatch response.
 *
 * @param  response  Response to parse.
 */
void DeleteMessageBatchResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteMessageBatchResponsePrivate
 *
 * @brief  Private implementation for DeleteMessageBatchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMessageBatchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteMessageBatchResponse instance.
 */
DeleteMessageBatchResponsePrivate::DeleteMessageBatchResponsePrivate(
    DeleteMessageBatchQueueResponse * const q) : DeleteMessageBatchPrivate(q)
{

}

/**
 * @brief  Parse an SQS DeleteMessageBatchResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteMessageBatchResponsePrivate::DeleteMessageBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMessageBatchResponse"));
    /// @todo
}
