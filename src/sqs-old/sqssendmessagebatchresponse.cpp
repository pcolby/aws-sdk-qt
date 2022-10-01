// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqssendmessagebatchresponse.h"
#include "sqssendmessagebatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsSendMessageBatchResponse
 *
 * @brief  Handles SQS SendMessageBatch responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SendMessageBatch.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsSendMessageBatchResponse::SqsSendMessageBatchResponse(const SqsSendMessageBatchRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsSendMessageBatchResponsePrivate(this), parent)
{
    setRequest(new SqsSendMessageBatchRequest(request));
    setReply(reply);
}

bool SqsSendMessageBatchResponse::isValid() const
{
    //Q_D(const SqsSendMessageBatchResponse);
    /// @todo
    return ((false) && (SqsResponse::isValid()));
}

const SqsSendMessageBatchRequest * SqsSendMessageBatchResponse::request() const
{
    Q_D(const SqsSendMessageBatchResponse);
    return static_cast<const SqsSendMessageBatchRequest *>(d->request);
}

/**
 * @brief  Parse an SQS SendMessageBatch response.
 *
 * This implementation parses SQS SendMessageBatchResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <SendMessageBatchResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </SendMessageBatchResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsSendMessageBatchResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsSendMessageBatchResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        /// @todo
        if (xml.name() == QLatin1String("SendMessageBatchResponse")) {
            d->parseSendMessageBatchResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsSendMessageBatchResponsePrivate
 *
 * @brief  Private implementation for SqsSendMessageBatchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsSendMessageBatchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsSendMessageBatchResponse instance.
 */
SqsSendMessageBatchResponsePrivate::SqsSendMessageBatchResponsePrivate(
    SqsSendMessageBatchResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS SendMessageBatchResponse element.
 *
 * This implementation parses SQS SendMessageBatchResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <SendMessageBatchResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </SendMessageBatchResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsSendMessageBatchResponsePrivate::parseSendMessageBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendMessageBatchResponse"));
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
