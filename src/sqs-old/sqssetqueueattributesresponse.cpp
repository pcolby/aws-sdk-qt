// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqssetqueueattributesresponse.h"
#include "sqssetqueueattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsSetQueueAttributesResponse
 *
 * @brief  Handles SQS SetQueueAttributes responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SetQueueAttributes.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsSetQueueAttributesResponse::SqsSetQueueAttributesResponse(const SqsSetQueueAttributesRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsSetQueueAttributesResponsePrivate(this), parent)
{
    setRequest(new SqsSetQueueAttributesRequest(request));
    setReply(reply);
}

const SqsSetQueueAttributesRequest * SqsSetQueueAttributesResponse::request() const
{
    Q_D(const SqsSetQueueAttributesResponse);
    return static_cast<const SqsSetQueueAttributesRequest *>(d->request);
}

/**
 * @brief  Parse an SQS SetQueueAttributes response.
 *
 * This implementation parses SQS SetQueueAttributesResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <SetQueueAttributesResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </SetQueueAttributesResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsSetQueueAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsSetQueueAttributesResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("SetQueueAttributesResponse")) {
            d->parseSetQueueAttributesResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsSetQueueAttributesResponsePrivate
 *
 * @brief  Private implementation for SqsSetQueueAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsSetQueueAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsSetQueueAttributesResponse instance.
 */
SqsSetQueueAttributesResponsePrivate::SqsSetQueueAttributesResponsePrivate(
    SqsSetQueueAttributesResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS SetQueueAttributesResponse element.
 *
 * This implementation parses SQS SetQueueAttributesResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <SetQueueAttributesResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </SetQueueAttributesResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsSetQueueAttributesResponsePrivate::parseSetQueueAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetQueueAttributesResponse"));
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
