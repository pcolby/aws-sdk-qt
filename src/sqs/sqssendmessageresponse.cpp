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

#include "sqssendmessageresponse.h"
#include "sqssendmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsSendMessageResponse
 *
 * @brief  Handles SQS SendMessage responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SendMessage.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsSendMessageResponse::SqsSendMessageResponse(const SqsSendMessageRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsSendMessageResponsePrivate(this), parent)
{
    setRequest(new SqsSendMessageRequest(request));
    setReply(reply);
}

bool SqsSendMessageResponse::isValid() const
{
    Q_D(const SqsSendMessageResponse);
    /// @todo
    return ((false) && (SqsResponse::isValid()));
}

const SqsSendMessageRequest * SqsSendMessageResponse::request() const
{
    Q_D(const SqsSendMessageResponse);
    return static_cast<const SqsSendMessageRequest *>(d->request);
}

/**
 * @brief  Parse an SQS SendMessage response.
 *
 * This implementation parses SQS SendMessageResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <SendMessageResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </SendMessageResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsSendMessageResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsSendMessageResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        /// @todo
        if (xml.name() == QLatin1String("SendMessageResponse")) {
            d->parseSendMessageResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsSendMessageResponsePrivate
 *
 * @brief  Private implementation for SqsSendMessageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsSendMessageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsSendMessageResponse instance.
 */
SqsSendMessageResponsePrivate::SqsSendMessageResponsePrivate(
    SqsSendMessageResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS SendMessageResponse element.
 *
 * This implementation parses SQS SendMessageResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <SendMessageResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </SendMessageResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsSendMessageResponsePrivate::parseSendMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendMessageResponse"));
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
