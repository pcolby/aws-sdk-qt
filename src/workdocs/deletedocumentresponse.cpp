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

#include "deletedocumentresponse.h"
#include "deletedocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  DeleteDocumentResponse
 *
 * @brief  Handles WorkDocs DeleteDocument responses.
 *
 * @see    WorkDocsClient::deleteDocument
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDocumentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DeleteDocumentResponsePrivate(this), parent)
{
    setRequest(new DeleteDocumentRequest(request));
    setReply(reply);
}

const DeleteDocumentRequest * DeleteDocumentResponse::request() const
{
    Q_D(const DeleteDocumentResponse);
    return static_cast<const DeleteDocumentRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DeleteDocument response.
 *
 * @param  response  Response to parse.
 */
void DeleteDocumentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDocumentResponsePrivate
 *
 * @brief  Private implementation for DeleteDocumentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDocumentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDocumentResponse instance.
 */
DeleteDocumentResponsePrivate::DeleteDocumentResponsePrivate(
    DeleteDocumentQueueResponse * const q) : DeleteDocumentPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DeleteDocumentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDocumentResponsePrivate::DeleteDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDocumentResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace AWS
