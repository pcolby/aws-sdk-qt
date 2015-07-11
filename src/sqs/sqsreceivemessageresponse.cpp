/*
    Copyright 2013-2015 Paul Colby

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

#include "sqsreceivemessageresponse.h"
#include "sqsreceivemessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsReceiveMessageResponse
 *
 * @brief  Handles SQS ReceiveMessage responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_ReceiveMessage.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsReceiveMessageResponse::SqsReceiveMessageResponse(const SqsReceiveMessageRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsReceiveMessageResponsePrivate(this), parent)
{
    setRequest(new SqsReceiveMessageRequest(request));
    setReply(reply);
}

bool SqsReceiveMessageResponse::isValid() const
{
    //Q_D(const SqsReceiveMessageResponse);
    /// @todo
    return ((false) && (SqsResponse::isValid()));
}

const SqsReceiveMessageRequest * SqsReceiveMessageResponse::request() const
{
    Q_D(const SqsReceiveMessageResponse);
    return static_cast<const SqsReceiveMessageRequest *>(d->request);
}

/**
 * @brief  Parse an SQS ReceiveMessage response.
 *
 * This implementation parses SQS ReceiveMessageResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <ReceiveMessageResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </ReceiveMessageResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsReceiveMessageResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsReceiveMessageResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        /// @todo
        if (xml.name() == QLatin1String("ReceiveMessageResponse")) {
            d->parseReceiveMessageResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsReceiveMessageResponsePrivate
 *
 * @brief  Private implementation for SqsReceiveMessageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsReceiveMessageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsReceiveMessageResponse instance.
 */
SqsReceiveMessageResponsePrivate::SqsReceiveMessageResponsePrivate(
    SqsReceiveMessageResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS ReceiveMessageResponse element.
 *
 * This implementation parses SQS ReceiveMessageResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <ReceiveMessageResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </ReceiveMessageResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsReceiveMessageResponsePrivate::parseReceiveMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReceiveMessageResponse"));
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
