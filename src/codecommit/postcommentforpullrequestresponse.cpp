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

#include "postcommentforpullrequestresponse.h"
#include "postcommentforpullrequestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  PostCommentForPullRequestResponse
 *
 * @brief  Handles CodeCommit PostCommentForPullRequest responses.
 *
 * @see    CodeCommitClient::postCommentForPullRequest
 */

/**
 * @brief  Constructs a new PostCommentForPullRequestResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PostCommentForPullRequestResponse::PostCommentForPullRequestResponse(
        const PostCommentForPullRequestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new PostCommentForPullRequestResponsePrivate(this), parent)
{
    setRequest(new PostCommentForPullRequestRequest(request));
    setReply(reply);
}

const PostCommentForPullRequestRequest * PostCommentForPullRequestResponse::request() const
{
    Q_D(const PostCommentForPullRequestResponse);
    return static_cast<const PostCommentForPullRequestRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit PostCommentForPullRequest response.
 *
 * @param  response  Response to parse.
 */
void PostCommentForPullRequestResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PostCommentForPullRequestResponsePrivate
 *
 * @brief  Private implementation for PostCommentForPullRequestResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PostCommentForPullRequestResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PostCommentForPullRequestResponse instance.
 */
PostCommentForPullRequestResponsePrivate::PostCommentForPullRequestResponsePrivate(
    PostCommentForPullRequestQueueResponse * const q) : PostCommentForPullRequestPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit PostCommentForPullRequestResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PostCommentForPullRequestResponsePrivate::PostCommentForPullRequestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PostCommentForPullRequestResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace AWS
