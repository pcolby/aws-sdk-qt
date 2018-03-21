/*
    Copyright 2013-2018 Paul Colby

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

#include "describeattachmentresponse.h"
#include "describeattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Support {

/**
 * @class  DescribeAttachmentResponse
 *
 * @brief  Handles Support DescribeAttachment responses.
 *
 * @see    SupportClient::describeAttachment
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAttachmentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new DescribeAttachmentResponsePrivate(this), parent)
{
    setRequest(new DescribeAttachmentRequest(request));
    setReply(reply);
}

const DescribeAttachmentRequest * DescribeAttachmentResponse::request() const
{
    Q_D(const DescribeAttachmentResponse);
    return static_cast<const DescribeAttachmentRequest *>(d->request);
}

/**
 * @brief  Parse a Support DescribeAttachment response.
 *
 * @param  response  Response to parse.
 */
void DescribeAttachmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAttachmentResponsePrivate
 *
 * @brief  Private implementation for DescribeAttachmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAttachmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAttachmentResponse instance.
 */
DescribeAttachmentResponsePrivate::DescribeAttachmentResponsePrivate(
    DescribeAttachmentQueueResponse * const q) : DescribeAttachmentPrivate(q)
{

}

/**
 * @brief  Parse an Support DescribeAttachmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAttachmentResponsePrivate::DescribeAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAttachmentResponse"));
    /// @todo
}
