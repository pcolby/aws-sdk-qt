/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sqscreatequeueresponse.h"
#include "sqscreatequeueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsCreateQueueResponse
 *
 * @brief  Handles SQS CreateQueue responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_CreateQueue.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsCreateQueueResponse::SqsCreateQueueResponse(const SqsCreateQueueRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsCreateQueueResponsePrivate(this), parent)
{
    setRequest(new SqsCreateQueueRequest(request));
    setReply(reply);
}

bool SqsCreateQueueResponse::isValid() const
{
    Q_D(const SqsCreateQueueResponse);
    return ((!d->queueUrl.isEmpty()) && (SqsResponse::isValid()));
}

const SqsCreateQueueRequest * SqsCreateQueueResponse::request() const
{
    Q_D(const SqsCreateQueueResponse);
    return static_cast<const SqsCreateQueueRequest *>(d->request);
}

/**
 * @brief  Get the created queue's URL.
 *
 * @return The URL of the create queue, or a null QString if the response was
 *         not parsed successfully.
 */
QString SqsCreateQueueResponse::queueUrl() const
{
    Q_D(const SqsCreateQueueResponse);
    return d->queueUrl;
}

/**
 * @brief  Parse an SQS CreateQueue response.
 *
 * This implementation parses SQS CreateQueueResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <CreateQueueResponse>
 *   <CreateQueueResult>
 *     <QueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</QueueUrl>
 *   </CreateQueueResult>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </CreateQueueResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsCreateQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsCreateQueueResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("CreateQueueResponse")) {
            d->parseCreateQueueResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsCreateQueueResponsePrivate
 *
 * @brief  Private implementation for SqsCreateQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsCreateQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsCreateQueueResponse instance.
 */
SqsCreateQueueResponsePrivate::SqsCreateQueueResponsePrivate(SqsCreateQueueResponse * const q)
    : SqsResponsePrivate(q), q_ptr(q)
{

}

/**
 * @brief  Parse an SQS CreateQueueResponse element.
 *
 * This implementation parses SQS CreateQueueResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <CreateQueueResponse>
 *   <CreateQueueResult>
 *     <QueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</QueueUrl>
 *   </CreateQueueResult>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </CreateQueueResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsCreateQueueResponsePrivate::parseCreateQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQueueResponse"));
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("CreateQueueResult")) {
            parseCreateQueueResult(xml);
        } else if (xml.name() == QLatin1String("ResponseMetadata")) {
            parseResponseMetadata(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @brief  Parse an SQS CreateQueueResult element.
 *
 * This implementation parses SQS CreateQueueResult elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <CreateQueueResult>
 *   <QueueUrl>http://sqs.us-east-1.amazonaws.com/123456789012/testQueue</QueueUrl>
 * </CreateQueueResult>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsCreateQueueResponsePrivate::parseCreateQueueResult(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQueueResult"));
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("QueueUrl")) {
            queueUrl = xml.readElementText();
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

} // namespace SqsOld
} // namespace QtAws
