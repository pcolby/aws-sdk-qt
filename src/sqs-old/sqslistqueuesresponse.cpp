/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sqslistqueuesresponse.h"
#include "sqslistqueuesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsListQueuesResponse
 *
 * @brief  Handles SQS ListQueues responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_ListQueues.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsListQueuesResponse::SqsListQueuesResponse(const SqsListQueuesRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsListQueuesResponsePrivate(this), parent)
{
    setRequest(new SqsListQueuesRequest(request));
    setReply(reply);
}

bool SqsListQueuesResponse::isValid() const
{
    //Q_D(const SqsListQueuesResponse);
    /// @todo
    return ((false) && (SqsResponse::isValid()));
}

const SqsListQueuesRequest * SqsListQueuesResponse::request() const
{
    Q_D(const SqsListQueuesResponse);
    return static_cast<const SqsListQueuesRequest *>(d->request);
}

/**
 * @brief  Parse an SQS ListQueues response.
 *
 * This implementation parses SQS ListQueuesResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <ListQueuesResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </ListQueuesResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsListQueuesResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsListQueuesResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        /// @todo
        if (xml.name() == QLatin1String("ListQueuesResponse")) {
            d->parseListQueuesResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsListQueuesResponsePrivate
 *
 * @brief  Private implementation for SqsListQueuesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsListQueuesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsListQueuesResponse instance.
 */
SqsListQueuesResponsePrivate::SqsListQueuesResponsePrivate(
    SqsListQueuesResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS ListQueuesResponse element.
 *
 * This implementation parses SQS ListQueuesResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <ListQueuesResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </ListQueuesResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsListQueuesResponsePrivate::parseListQueuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQueuesResponse"));
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
