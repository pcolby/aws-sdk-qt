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

#include "deletecommentcontentresponse.h"
#include "deletecommentcontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  DeleteCommentContentResponse
 *
 * @brief  Handles CodeCommit DeleteCommentContent responses.
 *
 * @see    CodeCommitClient::deleteCommentContent
 */

/**
 * @brief  Constructs a new DeleteCommentContentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCommentContentResponse::DeleteCommentContentResponse(
        const DeleteCommentContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteCommentContentResponse(new DeleteCommentContentResponsePrivate(this), parent)
{
    setRequest(new DeleteCommentContentRequest(request));
    setReply(reply);
}

const DeleteCommentContentRequest * DeleteCommentContentResponse::request() const
{
    Q_D(const DeleteCommentContentResponse);
    return static_cast<const DeleteCommentContentRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit DeleteCommentContent response.
 *
 * @param  response  Response to parse.
 */
void DeleteCommentContentResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteCommentContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCommentContentResponsePrivate
 *
 * @brief  Private implementation for DeleteCommentContentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCommentContentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCommentContentResponse instance.
 */
DeleteCommentContentResponsePrivate::DeleteCommentContentResponsePrivate(
    DeleteCommentContentResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit DeleteCommentContentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCommentContentResponsePrivate::parseDeleteCommentContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCommentContentResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
