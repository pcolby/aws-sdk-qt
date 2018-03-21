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

#include "initiatemultipartuploadresponse.h"
#include "initiatemultipartuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  InitiateMultipartUploadResponse
 *
 * @brief  Handles Glacier InitiateMultipartUpload responses.
 *
 * @see    GlacierClient::initiateMultipartUpload
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InitiateMultipartUploadResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new InitiateMultipartUploadResponsePrivate(this), parent)
{
    setRequest(new InitiateMultipartUploadRequest(request));
    setReply(reply);
}

const InitiateMultipartUploadRequest * InitiateMultipartUploadResponse::request() const
{
    Q_D(const InitiateMultipartUploadResponse);
    return static_cast<const InitiateMultipartUploadRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier InitiateMultipartUpload response.
 *
 * @param  response  Response to parse.
 */
void InitiateMultipartUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  InitiateMultipartUploadResponsePrivate
 *
 * @brief  Private implementation for InitiateMultipartUploadResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InitiateMultipartUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InitiateMultipartUploadResponse instance.
 */
InitiateMultipartUploadResponsePrivate::InitiateMultipartUploadResponsePrivate(
    InitiateMultipartUploadQueueResponse * const q) : InitiateMultipartUploadPrivate(q)
{

}

/**
 * @brief  Parse an Glacier InitiateMultipartUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void InitiateMultipartUploadResponsePrivate::InitiateMultipartUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitiateMultipartUploadResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace AWS
