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

#include "updatecommentresponse.h"
#include "updatecommentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  UpdateCommentResponse
 *
 * @brief  Handles CodeCommit UpdateComment responses.
 *
 * @see    CodeCommitClient::updateComment
 */

/**
 * @brief  Constructs a new UpdateCommentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateCommentResponse::UpdateCommentResponse(
        const UpdateCommentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new UpdateCommentResponsePrivate(this), parent)
{
    setRequest(new UpdateCommentRequest(request));
    setReply(reply);
}

const UpdateCommentRequest * UpdateCommentResponse::request() const
{
    Q_D(const UpdateCommentResponse);
    return static_cast<const UpdateCommentRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit UpdateComment response.
 *
 * @param  response  Response to parse.
 */
void UpdateCommentResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateCommentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateCommentResponsePrivate
 *
 * @brief  Private implementation for UpdateCommentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCommentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateCommentResponse instance.
 */
UpdateCommentResponsePrivate::UpdateCommentResponsePrivate(
    UpdateCommentResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit UpdateCommentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateCommentResponsePrivate::UpdateCommentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCommentResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
