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

#include "getcommentresponse.h"
#include "getcommentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  GetCommentResponse
 *
 * @brief  Handles CodeCommit GetComment responses.
 *
 * @see    CodeCommitClient::getComment
 */

/**
 * @brief  Constructs a new GetCommentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCommentResponse::GetCommentResponse(
        const GetCommentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetCommentResponse(new GetCommentResponsePrivate(this), parent)
{
    setRequest(new GetCommentRequest(request));
    setReply(reply);
}

const GetCommentRequest * GetCommentResponse::request() const
{
    Q_D(const GetCommentResponse);
    return static_cast<const GetCommentRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit GetComment response.
 *
 * @param  response  Response to parse.
 */
void GetCommentResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCommentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCommentResponsePrivate
 *
 * @brief  Private implementation for GetCommentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCommentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCommentResponse instance.
 */
GetCommentResponsePrivate::GetCommentResponsePrivate(
    GetCommentResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit GetCommentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCommentResponsePrivate::parseGetCommentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCommentResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
