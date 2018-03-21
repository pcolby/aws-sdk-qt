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

#include "postcommentforcomparedcommitresponse.h"
#include "postcommentforcomparedcommitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  PostCommentForComparedCommitResponse
 *
 * @brief  Handles CodeCommit PostCommentForComparedCommit responses.
 *
 * @see    CodeCommitClient::postCommentForComparedCommit
 */

/**
 * @brief  Constructs a new PostCommentForComparedCommitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PostCommentForComparedCommitResponse::PostCommentForComparedCommitResponse(
        const PostCommentForComparedCommitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new PostCommentForComparedCommitResponsePrivate(this), parent)
{
    setRequest(new PostCommentForComparedCommitRequest(request));
    setReply(reply);
}

const PostCommentForComparedCommitRequest * PostCommentForComparedCommitResponse::request() const
{
    Q_D(const PostCommentForComparedCommitResponse);
    return static_cast<const PostCommentForComparedCommitRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit PostCommentForComparedCommit response.
 *
 * @param  response  Response to parse.
 */
void PostCommentForComparedCommitResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PostCommentForComparedCommitResponsePrivate
 *
 * @brief  Private implementation for PostCommentForComparedCommitResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PostCommentForComparedCommitResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PostCommentForComparedCommitResponse instance.
 */
PostCommentForComparedCommitResponsePrivate::PostCommentForComparedCommitResponsePrivate(
    PostCommentForComparedCommitQueueResponse * const q) : PostCommentForComparedCommitPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit PostCommentForComparedCommitResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PostCommentForComparedCommitResponsePrivate::PostCommentForComparedCommitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PostCommentForComparedCommitResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace AWS
