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

#include "describeuploadbufferresponse.h"
#include "describeuploadbufferresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  DescribeUploadBufferResponse
 *
 * @brief  Handles StorageGateway DescribeUploadBuffer responses.
 *
 * @see    StorageGatewayClient::describeUploadBuffer
 */

/**
 * @brief  Constructs a new DescribeUploadBufferResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeUploadBufferResponse::DescribeUploadBufferResponse(
        const DescribeUploadBufferRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DescribeUploadBufferResponsePrivate(this), parent)
{
    setRequest(new DescribeUploadBufferRequest(request));
    setReply(reply);
}

const DescribeUploadBufferRequest * DescribeUploadBufferResponse::request() const
{
    Q_D(const DescribeUploadBufferResponse);
    return static_cast<const DescribeUploadBufferRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeUploadBuffer response.
 *
 * @param  response  Response to parse.
 */
void DescribeUploadBufferResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeUploadBufferResponsePrivate
 *
 * @brief  Private implementation for DescribeUploadBufferResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUploadBufferResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeUploadBufferResponse instance.
 */
DescribeUploadBufferResponsePrivate::DescribeUploadBufferResponsePrivate(
    DescribeUploadBufferQueueResponse * const q) : DescribeUploadBufferPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeUploadBufferResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeUploadBufferResponsePrivate::DescribeUploadBufferResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUploadBufferResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
