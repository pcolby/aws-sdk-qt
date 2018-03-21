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

#include "uploadpartresponse.h"
#include "uploadpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  UploadPartResponse
 *
 * @brief  Handles S3 UploadPart responses.
 *
 * @see    S3Client::uploadPart
 */

/**
 * @brief  Constructs a new UploadPartResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UploadPartResponse::UploadPartResponse(
        const UploadPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new UploadPartResponsePrivate(this), parent)
{
    setRequest(new UploadPartRequest(request));
    setReply(reply);
}

const UploadPartRequest * UploadPartResponse::request() const
{
    Q_D(const UploadPartResponse);
    return static_cast<const UploadPartRequest *>(d->request);
}

/**
 * @brief  Parse a S3 UploadPart response.
 *
 * @param  response  Response to parse.
 */
void UploadPartResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UploadPartResponsePrivate
 *
 * @brief  Private implementation for UploadPartResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadPartResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UploadPartResponse instance.
 */
UploadPartResponsePrivate::UploadPartResponsePrivate(
    UploadPartQueueResponse * const q) : UploadPartPrivate(q)
{

}

/**
 * @brief  Parse an S3 UploadPartResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UploadPartResponsePrivate::UploadPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadPartResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
