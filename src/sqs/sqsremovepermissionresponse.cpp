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

#include "sqsremovepermissionresponse.h"
#include "sqsremovepermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

QTAWS_BEGIN_NAMESPACE

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

QTAWS_END_NAMESPACE
