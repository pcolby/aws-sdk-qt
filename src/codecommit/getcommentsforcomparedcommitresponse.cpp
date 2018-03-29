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

#include "getcommentsforcomparedcommitresponse.h"
#include "getcommentsforcomparedcommitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  GetCommentsForComparedCommitResponse
 *
 * @brief  Handles CodeCommit GetCommentsForComparedCommit responses.
 *
 * @see    CodeCommitClient::getCommentsForComparedCommit
 */

/**
 * @brief  Constructs a new GetCommentsForComparedCommitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCommentsForComparedCommitResponse::GetCommentsForComparedCommitResponse(
        const GetCommentsForComparedCommitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetCommentsForComparedCommitResponse(new GetCommentsForComparedCommitResponsePrivate(this), parent)
{
    setRequest(new GetCommentsForComparedCommitRequest(request));
    setReply(reply);
}

const GetCommentsForComparedCommitRequest * GetCommentsForComparedCommitResponse::request() const
{
    Q_D(const GetCommentsForComparedCommitResponse);
    return static_cast<const GetCommentsForComparedCommitRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit GetCommentsForComparedCommit response.
 *
 * @param  response  Response to parse.
 */
void GetCommentsForComparedCommitResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCommentsForComparedCommitResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCommentsForComparedCommitResponsePrivate
 *
 * @brief  Private implementation for GetCommentsForComparedCommitResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCommentsForComparedCommitResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCommentsForComparedCommitResponse instance.
 */
GetCommentsForComparedCommitResponsePrivate::GetCommentsForComparedCommitResponsePrivate(
    GetCommentsForComparedCommitResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit GetCommentsForComparedCommitResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCommentsForComparedCommitResponsePrivate::parseGetCommentsForComparedCommitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCommentsForComparedCommitResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
