// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqsdeletemessageresponse.h"
#include "sqsdeletemessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsDeleteMessageResponse
 *
 * @brief  Handles SQS DeleteMessage responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_DeleteMessage.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsDeleteMessageResponse::SqsDeleteMessageResponse(const SqsDeleteMessageRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsDeleteMessageResponsePrivate(this), parent)
{
    setRequest(new SqsDeleteMessageRequest(request));
    setReply(reply);
}

const SqsDeleteMessageRequest * SqsDeleteMessageResponse::request() const
{
    Q_D(const SqsDeleteMessageResponse);
    return static_cast<const SqsDeleteMessageRequest *>(d->request);
}

/**
 * @brief  Parse an SQS DeleteMessage response.
 *
 * This implementation parses SQS DeleteMessageResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <DeleteMessageResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </DeleteMessageResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsDeleteMessageResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsDeleteMessageResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("DeleteMessageResponse")) {
            d->parseDeleteMessageResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsDeleteMessageResponsePrivate
 *
 * @brief  Private implementation for SqsDeleteMessageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsDeleteMessageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsDeleteMessageResponse instance.
 */
SqsDeleteMessageResponsePrivate::SqsDeleteMessageResponsePrivate(
    SqsDeleteMessageResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS DeleteMessageResponse element.
 *
 * This implementation parses SQS DeleteMessageResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <DeleteMessageResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </DeleteMessageResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsDeleteMessageResponsePrivate::parseDeleteMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMessageResponse"));
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
