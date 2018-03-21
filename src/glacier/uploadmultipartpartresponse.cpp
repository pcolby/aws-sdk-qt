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

#include "uploadmultipartpartresponse.h"
#include "uploadmultipartpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  UploadMultipartPartResponse
 *
 * @brief  Handles Glacier UploadMultipartPart responses.
 *
 * @see    GlacierClient::uploadMultipartPart
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UploadMultipartPartResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new UploadMultipartPartResponsePrivate(this), parent)
{
    setRequest(new UploadMultipartPartRequest(request));
    setReply(reply);
}

const UploadMultipartPartRequest * UploadMultipartPartResponse::request() const
{
    Q_D(const UploadMultipartPartResponse);
    return static_cast<const UploadMultipartPartRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier UploadMultipartPart response.
 *
 * @param  response  Response to parse.
 */
void UploadMultipartPartResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UploadMultipartPartResponsePrivate
 *
 * @brief  Private implementation for UploadMultipartPartResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadMultipartPartResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UploadMultipartPartResponse instance.
 */
UploadMultipartPartResponsePrivate::UploadMultipartPartResponsePrivate(
    UploadMultipartPartQueueResponse * const q) : UploadMultipartPartPrivate(q)
{

}

/**
 * @brief  Parse an Glacier UploadMultipartPartResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UploadMultipartPartResponsePrivate::UploadMultipartPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadMultipartPartResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace AWS
