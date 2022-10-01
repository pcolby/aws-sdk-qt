// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqsaddpermissionresponse.h"
#include "sqsaddpermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsAddPermissionResponse
 *
 * @brief  Handles SQS AddPermission responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_AddPermission.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsAddPermissionResponse::SqsAddPermissionResponse(const SqsAddPermissionRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsAddPermissionResponsePrivate(this), parent)
{
    setRequest(new SqsAddPermissionRequest(request));
    setReply(reply);
}

const SqsAddPermissionRequest * SqsAddPermissionResponse::request() const
{
    Q_D(const SqsAddPermissionResponse);
    return static_cast<const SqsAddPermissionRequest *>(d->request);
}

/**
 * @brief  Parse an SQS AddPermission response.
 *
 * This implementation parses SQS AddPermissionResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <AddPermissionResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </AddPermissionResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsAddPermissionResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsAddPermissionResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("AddPermissionResponse")) {
            d->parseAddPermissionResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsAddPermissionResponsePrivate
 *
 * @brief  Private implementation for SqsAddPermissionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsAddPermissionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsAddPermissionResponse instance.
 */
SqsAddPermissionResponsePrivate::SqsAddPermissionResponsePrivate(
    SqsAddPermissionResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS AddPermissionResponse element.
 *
 * This implementation parses SQS AddPermissionResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <AddPermissionResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </AddPermissionResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsAddPermissionResponsePrivate::parseAddPermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddPermissionResponse"));
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
