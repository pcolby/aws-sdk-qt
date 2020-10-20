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

#include "sqsgetqueueurlresponse.h"
#include "sqsgetqueueurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsGetQueueUrlResponse
 *
 * @brief  Handles SQS GetQueueUrl responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_GetQueueUrl.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsGetQueueUrlResponse::SqsGetQueueUrlResponse(const SqsGetQueueUrlRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsGetQueueUrlResponsePrivate(this), parent)
{
    setRequest(new SqsGetQueueUrlRequest(request));
    setReply(reply);
}

bool SqsGetQueueUrlResponse::isValid() const
{
    //Q_D(const SqsGetQueueUrlResponse);
    /// @todo
    return ((false) && (SqsResponse::isValid()));
}

const SqsGetQueueUrlRequest * SqsGetQueueUrlResponse::request() const
{
    Q_D(const SqsGetQueueUrlResponse);
    return static_cast<const SqsGetQueueUrlRequest *>(d->request);
}

/**
 * @brief  Parse an SQS GetQueueUrl response.
 *
 * This implementation parses SQS GetQueueUrlResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <GetQueueUrlResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </GetQueueUrlResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsGetQueueUrlResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsGetQueueUrlResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        /// @todo
        if (xml.name() == QLatin1String("GetQueueUrlResponse")) {
            d->parseGetQueueUrlResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsGetQueueUrlResponsePrivate
 *
 * @brief  Private implementation for SqsGetQueueUrlResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsGetQueueUrlResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsGetQueueUrlResponse instance.
 */
SqsGetQueueUrlResponsePrivate::SqsGetQueueUrlResponsePrivate(
    SqsGetQueueUrlResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS GetQueueUrlResponse element.
 *
 * This implementation parses SQS GetQueueUrlResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <GetQueueUrlResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </GetQueueUrlResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsGetQueueUrlResponsePrivate::parseGetQueueUrlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueueUrlResponse"));
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
