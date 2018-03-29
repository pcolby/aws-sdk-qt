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

#include "initiatedocumentversionuploadresponse.h"
#include "initiatedocumentversionuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  InitiateDocumentVersionUploadResponse
 *
 * @brief  Handles WorkDocs InitiateDocumentVersionUpload responses.
 *
 * @see    WorkDocsClient::initiateDocumentVersionUpload
 */

/**
 * @brief  Constructs a new InitiateDocumentVersionUploadResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InitiateDocumentVersionUploadResponse::InitiateDocumentVersionUploadResponse(
        const InitiateDocumentVersionUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new InitiateDocumentVersionUploadResponsePrivate(this), parent)
{
    setRequest(new InitiateDocumentVersionUploadRequest(request));
    setReply(reply);
}

const InitiateDocumentVersionUploadRequest * InitiateDocumentVersionUploadResponse::request() const
{
    Q_D(const InitiateDocumentVersionUploadResponse);
    return static_cast<const InitiateDocumentVersionUploadRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs InitiateDocumentVersionUpload response.
 *
 * @param  response  Response to parse.
 */
void InitiateDocumentVersionUploadResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  InitiateDocumentVersionUploadResponsePrivate
 *
 * @brief  Private implementation for InitiateDocumentVersionUploadResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InitiateDocumentVersionUploadResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InitiateDocumentVersionUploadResponse instance.
 */
InitiateDocumentVersionUploadResponsePrivate::InitiateDocumentVersionUploadResponsePrivate(
    InitiateDocumentVersionUploadResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs InitiateDocumentVersionUploadResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void InitiateDocumentVersionUploadResponsePrivate::InitiateDocumentVersionUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitiateDocumentVersionUploadResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
