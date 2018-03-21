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

#include "abortmultipartuploadresponse.h"
#include "abortmultipartuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  AbortMultipartUploadResponse
 *
 * @brief  Handles Glacier AbortMultipartUpload responses.
 *
 * @see    GlacierClient::abortMultipartUpload
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AbortMultipartUploadResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new AbortMultipartUploadResponsePrivate(this), parent)
{
    setRequest(new AbortMultipartUploadRequest(request));
    setReply(reply);
}

const AbortMultipartUploadRequest * AbortMultipartUploadResponse::request() const
{
    Q_D(const AbortMultipartUploadResponse);
    return static_cast<const AbortMultipartUploadRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier AbortMultipartUpload response.
 *
 * @param  response  Response to parse.
 */
void AbortMultipartUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AbortMultipartUploadResponsePrivate
 *
 * @brief  Private implementation for AbortMultipartUploadResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AbortMultipartUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AbortMultipartUploadResponse instance.
 */
AbortMultipartUploadResponsePrivate::AbortMultipartUploadResponsePrivate(
    AbortMultipartUploadQueueResponse * const q) : AbortMultipartUploadPrivate(q)
{

}

/**
 * @brief  Parse an Glacier AbortMultipartUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AbortMultipartUploadResponsePrivate::AbortMultipartUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AbortMultipartUploadResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace AWS
