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

#include "abortdocumentversionuploadresponse.h"
#include "abortdocumentversionuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  AbortDocumentVersionUploadResponse
 *
 * @brief  Handles WorkDocs AbortDocumentVersionUpload responses.
 *
 * @see    WorkDocsClient::abortDocumentVersionUpload
 */

/**
 * @brief  Constructs a new AbortDocumentVersionUploadResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AbortDocumentVersionUploadResponse::AbortDocumentVersionUploadResponse(
        const AbortDocumentVersionUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new AbortDocumentVersionUploadResponsePrivate(this), parent)
{
    setRequest(new AbortDocumentVersionUploadRequest(request));
    setReply(reply);
}

const AbortDocumentVersionUploadRequest * AbortDocumentVersionUploadResponse::request() const
{
    Q_D(const AbortDocumentVersionUploadResponse);
    return static_cast<const AbortDocumentVersionUploadRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs AbortDocumentVersionUpload response.
 *
 * @param  response  Response to parse.
 */
void AbortDocumentVersionUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AbortDocumentVersionUploadResponsePrivate
 *
 * @brief  Private implementation for AbortDocumentVersionUploadResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AbortDocumentVersionUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AbortDocumentVersionUploadResponse instance.
 */
AbortDocumentVersionUploadResponsePrivate::AbortDocumentVersionUploadResponsePrivate(
    AbortDocumentVersionUploadQueueResponse * const q) : AbortDocumentVersionUploadPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs AbortDocumentVersionUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AbortDocumentVersionUploadResponsePrivate::AbortDocumentVersionUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AbortDocumentVersionUploadResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace AWS
