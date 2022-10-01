// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
