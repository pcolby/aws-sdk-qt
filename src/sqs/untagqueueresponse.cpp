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

#include "untagqueueresponse.h"
#include "untagqueueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/**
 * @class  UntagQueueResponse
 *
 * @brief  Handles SQS UntagQueue responses.
 *
 * @see    SQSClient::untagQueue
 */

/**
 * @brief  Constructs a new UntagQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UntagQueueResponse::UntagQueueResponse(
        const UntagQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SQSResponse(new UntagQueueResponsePrivate(this), parent)
{
    setRequest(new UntagQueueRequest(request));
    setReply(reply);
}

const UntagQueueRequest * UntagQueueResponse::request() const
{
    Q_D(const UntagQueueResponse);
    return static_cast<const UntagQueueRequest *>(d->request);
}

/**
 * @brief  Parse a SQS UntagQueue response.
 *
 * @param  response  Response to parse.
 */
void UntagQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(UntagQueueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UntagQueueResponsePrivate
 *
 * @brief  Private implementation for UntagQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UntagQueueResponse instance.
 */
UntagQueueResponsePrivate::UntagQueueResponsePrivate(
    UntagQueueResponse * const q) : SQSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS UntagQueueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UntagQueueResponsePrivate::parseUntagQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagQueueResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
