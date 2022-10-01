// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqschangemessagevisibilitybatchresponse.h"
#include "sqschangemessagevisibilitybatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsChangeMessageVisibilityBatchResponse
 *
 * @brief  Handles SQS ChangeMessageVisibilityBatch responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_ChangeMessageVisibilityBatch.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsChangeMessageVisibilityBatchResponse::SqsChangeMessageVisibilityBatchResponse(const SqsChangeMessageVisibilityBatchRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsChangeMessageVisibilityBatchResponsePrivate(this), parent)
{
    setRequest(new SqsChangeMessageVisibilityBatchRequest(request));
    setReply(reply);
}

bool SqsChangeMessageVisibilityBatchResponse::isValid() const
{
    //Q_D(const SqsChangeMessageVisibilityBatchResponse);
    /// @todo
    return ((false) && (SqsResponse::isValid()));
}

const SqsChangeMessageVisibilityBatchRequest * SqsChangeMessageVisibilityBatchResponse::request() const
{
    Q_D(const SqsChangeMessageVisibilityBatchResponse);
    return static_cast<const SqsChangeMessageVisibilityBatchRequest *>(d->request);
}

/**
 * @brief  Parse an SQS ChangeMessageVisibilityBatch response.
 *
 * This implementation parses SQS ChangeMessageVisibilityBatchResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <ChangeMessageVisibilityBatchResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </ChangeMessageVisibilityBatchResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsChangeMessageVisibilityBatchResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsChangeMessageVisibilityBatchResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        /// @todo
        if (xml.name() == QLatin1String("ChangeMessageVisibilityBatchResponse")) {
            d->parseChangeMessageVisibilityBatchResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsChangeMessageVisibilityBatchResponsePrivate
 *
 * @brief  Private implementation for SqsChangeMessageVisibilityBatchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsChangeMessageVisibilityBatchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsChangeMessageVisibilityBatchResponse instance.
 */
SqsChangeMessageVisibilityBatchResponsePrivate::SqsChangeMessageVisibilityBatchResponsePrivate(
    SqsChangeMessageVisibilityBatchResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS ChangeMessageVisibilityBatchResponse element.
 *
 * This implementation parses SQS ChangeMessageVisibilityBatchResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <ChangeMessageVisibilityBatchResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </ChangeMessageVisibilityBatchResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsChangeMessageVisibilityBatchResponsePrivate::parseChangeMessageVisibilityBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChangeMessageVisibilityBatchResponse"));
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
