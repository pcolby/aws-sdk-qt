// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqsremovepermissionresponse.h"
#include "sqsremovepermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsRemovePermissionResponse
 *
 * @brief  Handles SQS RemovePermission responses.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_RemovePermission.html
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SqsRemovePermissionResponse::SqsRemovePermissionResponse(const SqsRemovePermissionRequest &request,
                                               QNetworkReply * const reply,
                                               QObject * const parent)
    : SqsResponse(new SqsRemovePermissionResponsePrivate(this), parent)
{
    setRequest(new SqsRemovePermissionRequest(request));
    setReply(reply);
}

const SqsRemovePermissionRequest * SqsRemovePermissionResponse::request() const
{
    Q_D(const SqsRemovePermissionResponse);
    return static_cast<const SqsRemovePermissionRequest *>(d->request);
}

/**
 * @brief  Parse an SQS RemovePermission response.
 *
 * This implementation parses SQS RemovePermissionResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <RemovePermissionResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </RemovePermissionResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsRemovePermissionResponse::parseSuccess(QIODevice &response)
{
    Q_D(SqsRemovePermissionResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("RemovePermissionResponse")) {
            d->parseRemovePermissionResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
}

/**
 * @internal
 *
 * @class  SqsRemovePermissionResponsePrivate
 *
 * @brief  Private implementation for SqsRemovePermissionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsRemovePermissionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsRemovePermissionResponse instance.
 */
SqsRemovePermissionResponsePrivate::SqsRemovePermissionResponsePrivate(
    SqsRemovePermissionResponse * const q) : SqsResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS RemovePermissionResponse element.
 *
 * This implementation parses SQS RemovePermissionResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 *
 * @code{xml}
 * <RemovePermissionResponse>
 *   <ResponseMetadata>
 *     <RequestId>7a62c49f-347e-4fc4-9331-6e8e7a96aa73</RequestId>
 *   </ResponseMetadata>
 * </RemovePermissionResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsRemovePermissionResponsePrivate::parseRemovePermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemovePermissionResponse"));
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
