// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqsdeletequeueresponse.h"
#include "sqsdeletequeueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsDeleteQueueResponse
 *
 * @brief  Handles SQS DeleteQueue responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_DeleteQueue.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsDeleteQueueResponse::SqsDeleteQueueResponse(const SqsDeleteQueueRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsDeleteQueueResponsePrivate(this), parent)
{
    setRequest(new SqsDeleteQueueRequest(request));
    setReply(reply);
}

const SqsDeleteQueueRequest * SqsDeleteQueueResponse::request() const
{
    Q_D(const SqsDeleteQueueResponse);
    return static_cast<const SqsDeleteQueueRequest *>(d->request);
}

/**
 * @brief  Parse an SQS DeleteQueue response.
 *
 * This implementation parses SQS DeleteQueueResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <DeleteQueueResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </DeleteQueueResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsDeleteQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsDeleteQueueResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("DeleteQueueResponse")) {
            d->parseDeleteQueueResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsDeleteQueueResponsePrivate
 *
 * @brief  Private implementation for SqsDeleteQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsDeleteQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsDeleteQueueResponse instance.
 */
SqsDeleteQueueResponsePrivate::SqsDeleteQueueResponsePrivate(
    SqsDeleteQueueResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS DeleteQueueResponse element.
 *
 * This implementation parses SQS DeleteQueueResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <DeleteQueueResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </DeleteQueueResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsDeleteQueueResponsePrivate::parseDeleteQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteQueueResponse"));
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
