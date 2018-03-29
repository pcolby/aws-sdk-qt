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

#include "deletecommentresponse.h"
#include "deletecommentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DeleteCommentResponse
 *
 * @brief  Handles WorkDocs DeleteComment responses.
 *
 * @see    WorkDocsClient::deleteComment
 */

/**
 * @brief  Constructs a new DeleteCommentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCommentResponse::DeleteCommentResponse(
        const DeleteCommentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DeleteCommentResponsePrivate(this), parent)
{
    setRequest(new DeleteCommentRequest(request));
    setReply(reply);
}

const DeleteCommentRequest * DeleteCommentResponse::request() const
{
    Q_D(const DeleteCommentResponse);
    return static_cast<const DeleteCommentRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DeleteComment response.
 *
 * @param  response  Response to parse.
 */
void DeleteCommentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCommentResponsePrivate
 *
 * @brief  Private implementation for DeleteCommentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCommentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCommentResponse instance.
 */
DeleteCommentResponsePrivate::DeleteCommentResponsePrivate(
    DeleteCommentResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DeleteCommentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCommentResponsePrivate::DeleteCommentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCommentResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
