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

#include "completemultipartuploadresponse.h"
#include "completemultipartuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  CompleteMultipartUploadResponse
 *
 * @brief  Handles S3 CompleteMultipartUpload responses.
 *
 * @see    S3Client::completeMultipartUpload
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CompleteMultipartUploadResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new CompleteMultipartUploadResponsePrivate(this), parent)
{
    setRequest(new CompleteMultipartUploadRequest(request));
    setReply(reply);
}

const CompleteMultipartUploadRequest * CompleteMultipartUploadResponse::request() const
{
    Q_D(const CompleteMultipartUploadResponse);
    return static_cast<const CompleteMultipartUploadRequest *>(d->request);
}

/**
 * @brief  Parse a S3 CompleteMultipartUpload response.
 *
 * @param  response  Response to parse.
 */
void CompleteMultipartUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CompleteMultipartUploadResponsePrivate
 *
 * @brief  Private implementation for CompleteMultipartUploadResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CompleteMultipartUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CompleteMultipartUploadResponse instance.
 */
CompleteMultipartUploadResponsePrivate::CompleteMultipartUploadResponsePrivate(
    CompleteMultipartUploadQueueResponse * const q) : CompleteMultipartUploadPrivate(q)
{

}

/**
 * @brief  Parse an S3 CompleteMultipartUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CompleteMultipartUploadResponsePrivate::CompleteMultipartUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteMultipartUploadResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
