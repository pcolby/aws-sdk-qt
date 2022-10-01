// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqsgetqueueattributesresponse.h"
#include "sqsgetqueueattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsGetQueueAttributesResponse
 *
 * @brief  Handles SQS GetQueueAttributes responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_GetQueueAttributes.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsGetQueueAttributesResponse::SqsGetQueueAttributesResponse(const SqsGetQueueAttributesRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsGetQueueAttributesResponsePrivate(this), parent)
{
    setRequest(new SqsGetQueueAttributesRequest(request));
    setReply(reply);
}

bool SqsGetQueueAttributesResponse::isValid() const
{
    //Q_D(const SqsGetQueueAttributesResponse);
    /// @todo
    return ((false) && (SqsResponse::isValid()));
}

const SqsGetQueueAttributesRequest * SqsGetQueueAttributesResponse::request() const
{
    Q_D(const SqsGetQueueAttributesResponse);
    return static_cast<const SqsGetQueueAttributesRequest *>(d->request);
}

/**
 * @brief  Parse an SQS GetQueueAttributes response.
 *
 * This implementation parses SQS GetQueueAttributesResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <GetQueueAttributesResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </GetQueueAttributesResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsGetQueueAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsGetQueueAttributesResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        /// @todo
        if (xml.name() == QLatin1String("GetQueueAttributesResponse")) {
            d->parseGetQueueAttributesResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsGetQueueAttributesResponsePrivate
 *
 * @brief  Private implementation for SqsGetQueueAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsGetQueueAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsGetQueueAttributesResponse instance.
 */
SqsGetQueueAttributesResponsePrivate::SqsGetQueueAttributesResponsePrivate(
    SqsGetQueueAttributesResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS GetQueueAttributesResponse element.
 *
 * This implementation parses SQS GetQueueAttributesResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <GetQueueAttributesResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </GetQueueAttributesResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsGetQueueAttributesResponsePrivate::parseGetQueueAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueueAttributesResponse"));
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
