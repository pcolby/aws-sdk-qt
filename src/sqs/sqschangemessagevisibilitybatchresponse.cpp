/*
    Copyright 2013-2016 Paul Colby

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

#include "sqschangemessagevisibilitybatchresponse.h"
#include "sqschangemessagevisibilitybatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

QTAWS_BEGIN_NAMESPACE

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

QTAWS_END_NAMESPACE
