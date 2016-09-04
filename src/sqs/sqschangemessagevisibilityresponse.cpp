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

#include "sqschangemessagevisibilityresponse.h"
#include "sqschangemessagevisibilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsChangeMessageVisibilityResponse
 *
 * @brief  Handles SQS ChangeMessageVisibility responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_ChangeMessageVisibility.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsChangeMessageVisibilityResponse::SqsChangeMessageVisibilityResponse(const SqsChangeMessageVisibilityRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsChangeMessageVisibilityResponsePrivate(this), parent)
{
    setRequest(new SqsChangeMessageVisibilityRequest(request));
    setReply(reply);
}

const SqsChangeMessageVisibilityRequest * SqsChangeMessageVisibilityResponse::request() const
{
    Q_D(const SqsChangeMessageVisibilityResponse);
    return static_cast<const SqsChangeMessageVisibilityRequest *>(d->request);
}

/**
 * @brief  Parse an SQS ChangeMessageVisibility response.
 *
 * This implementation parses SQS ChangeMessageVisibilityResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <ChangeMessageVisibilityResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </ChangeMessageVisibilityResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsChangeMessageVisibilityResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsChangeMessageVisibilityResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ChangeMessageVisibilityResponse")) {
            d->parseChangeMessageVisibilityResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsChangeMessageVisibilityResponsePrivate
 *
 * @brief  Private implementation for SqsChangeMessageVisibilityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsChangeMessageVisibilityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsChangeMessageVisibilityResponse instance.
 */
SqsChangeMessageVisibilityResponsePrivate::SqsChangeMessageVisibilityResponsePrivate(
    SqsChangeMessageVisibilityResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS ChangeMessageVisibilityResponse element.
 *
 * This implementation parses SQS ChangeMessageVisibilityResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <ChangeMessageVisibilityResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </ChangeMessageVisibilityResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsChangeMessageVisibilityResponsePrivate::parseChangeMessageVisibilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChangeMessageVisibilityResponse"));
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
