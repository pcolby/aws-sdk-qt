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

#include "sqspurgequeueresponse.h"
#include "sqspurgequeueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsPurgeQueueResponse
 *
 * @brief  Handles SQS PurgeQueue responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_PurgeQueue.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsPurgeQueueResponse::SqsPurgeQueueResponse(const SqsPurgeQueueRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsPurgeQueueResponsePrivate(this), parent)
{
    setRequest(new SqsPurgeQueueRequest(request));
    setReply(reply);
}

const SqsPurgeQueueRequest * SqsPurgeQueueResponse::request() const
{
    Q_D(const SqsPurgeQueueResponse);
    return static_cast<const SqsPurgeQueueRequest *>(d->request);
}

/**
 * @brief  Parse an SQS PurgeQueue response.
 *
 * This implementation parses SQS PurgeQueueResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <PurgeQueueResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </PurgeQueueResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsPurgeQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsPurgeQueueResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("PurgeQueueResponse")) {
            d->parsePurgeQueueResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsPurgeQueueResponsePrivate
 *
 * @brief  Private implementation for SqsPurgeQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsPurgeQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsPurgeQueueResponse instance.
 */
SqsPurgeQueueResponsePrivate::SqsPurgeQueueResponsePrivate(
    SqsPurgeQueueResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS PurgeQueueResponse element.
 *
 * This implementation parses SQS PurgeQueueResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <PurgeQueueResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </PurgeQueueResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsPurgeQueueResponsePrivate::parsePurgeQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurgeQueueResponse"));
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ResponseMetadata")) {
            parseResponseMetadata(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

} // namespace SqsOld
} // namespace QtAws
