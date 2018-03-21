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

#include "deletetopicresponse.h"
#include "deletetopicresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  DeleteTopicResponse
 *
 * @brief  Handles SNS DeleteTopic responses.
 *
 * @see    SNSClient::deleteTopic
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTopicResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new DeleteTopicResponsePrivate(this), parent)
{
    setRequest(new DeleteTopicRequest(request));
    setReply(reply);
}

const DeleteTopicRequest * DeleteTopicResponse::request() const
{
    Q_D(const DeleteTopicResponse);
    return static_cast<const DeleteTopicRequest *>(d->request);
}

/**
 * @brief  Parse a SNS DeleteTopic response.
 *
 * @param  response  Response to parse.
 */
void DeleteTopicResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTopicResponsePrivate
 *
 * @brief  Private implementation for DeleteTopicResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTopicResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTopicResponse instance.
 */
DeleteTopicResponsePrivate::DeleteTopicResponsePrivate(
    DeleteTopicQueueResponse * const q) : DeleteTopicPrivate(q)
{

}

/**
 * @brief  Parse an SNS DeleteTopicResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTopicResponsePrivate::DeleteTopicResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTopicResponse"));
    /// @todo
}

} // namespace SNS
} // namespace AWS
