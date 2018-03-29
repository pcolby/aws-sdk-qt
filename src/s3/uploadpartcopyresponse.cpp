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

#include "uploadpartcopyresponse.h"
#include "uploadpartcopyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  UploadPartCopyResponse
 *
 * @brief  Handles S3 UploadPartCopy responses.
 *
 * @see    S3Client::uploadPartCopy
 */

/**
 * @brief  Constructs a new UploadPartCopyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UploadPartCopyResponse::UploadPartCopyResponse(
        const UploadPartCopyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UploadPartCopyResponse(new UploadPartCopyResponsePrivate(this), parent)
{
    setRequest(new UploadPartCopyRequest(request));
    setReply(reply);
}

const UploadPartCopyRequest * UploadPartCopyResponse::request() const
{
    Q_D(const UploadPartCopyResponse);
    return static_cast<const UploadPartCopyRequest *>(d->request);
}

/**
 * @brief  Parse a S3 UploadPartCopy response.
 *
 * @param  response  Response to parse.
 */
void UploadPartCopyResponse::parseSuccess(QIODevice &response)
{
    Q_D(UploadPartCopyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UploadPartCopyResponsePrivate
 *
 * @brief  Private implementation for UploadPartCopyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadPartCopyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UploadPartCopyResponse instance.
 */
UploadPartCopyResponsePrivate::UploadPartCopyResponsePrivate(
    UploadPartCopyResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 UploadPartCopyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UploadPartCopyResponsePrivate::parseUploadPartCopyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadPartCopyResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
