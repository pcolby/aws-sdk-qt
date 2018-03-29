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

#include "createcommentresponse.h"
#include "createcommentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  CreateCommentResponse
 *
 * @brief  Handles WorkDocs CreateComment responses.
 *
 * @see    WorkDocsClient::createComment
 */

/**
 * @brief  Constructs a new CreateCommentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCommentResponse::CreateCommentResponse(
        const CreateCommentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateCommentResponse(new CreateCommentResponsePrivate(this), parent)
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
    Q_D(CreateCommentResponse);
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
    CreateCommentResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs CreateCommentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCommentResponsePrivate::parseCreateCommentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCommentResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
