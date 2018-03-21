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

#include "createcommentresponse.h"
#include "createcommentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  CreateCommentResponse
 *
 * @brief  Handles WorkDocs CreateComment responses.
 *
 * @see    WorkDocsClient::createComment
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCommentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new CreateCommentResponsePrivate(this), parent)
{
    setRequest(new CreateCommentRequest(request));
    setReply(reply);
}

const CreateCommentRequest * CreateCommentResponse::request() const
{
    Q_D(const CreateCommentResponse);
    return static_cast<const CreateCommentRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs CreateComment response.
 *
 * @param  response  Response to parse.
 */
void CreateCommentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCommentResponsePrivate
 *
 * @brief  Private implementation for CreateCommentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCommentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCommentResponse instance.
 */
CreateCommentResponsePrivate::CreateCommentResponsePrivate(
    CreateCommentQueueResponse * const q) : CreateCommentPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs CreateCommentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCommentResponsePrivate::CreateCommentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCommentResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace AWS
