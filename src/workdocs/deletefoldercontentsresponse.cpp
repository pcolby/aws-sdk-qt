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

#include "deletefoldercontentsresponse.h"
#include "deletefoldercontentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  DeleteFolderContentsResponse
 *
 * @brief  Handles WorkDocs DeleteFolderContents responses.
 *
 * @see    WorkDocsClient::deleteFolderContents
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFolderContentsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DeleteFolderContentsResponsePrivate(this), parent)
{
    setRequest(new DeleteFolderContentsRequest(request));
    setReply(reply);
}

const DeleteFolderContentsRequest * DeleteFolderContentsResponse::request() const
{
    Q_D(const DeleteFolderContentsResponse);
    return static_cast<const DeleteFolderContentsRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DeleteFolderContents response.
 *
 * @param  response  Response to parse.
 */
void DeleteFolderContentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteFolderContentsResponsePrivate
 *
 * @brief  Private implementation for DeleteFolderContentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFolderContentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteFolderContentsResponse instance.
 */
DeleteFolderContentsResponsePrivate::DeleteFolderContentsResponsePrivate(
    DeleteFolderContentsQueueResponse * const q) : DeleteFolderContentsPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DeleteFolderContentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteFolderContentsResponsePrivate::DeleteFolderContentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFolderContentsResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace AWS
