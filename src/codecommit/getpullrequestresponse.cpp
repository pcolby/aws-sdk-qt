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

#include "getpullrequestresponse.h"
#include "getpullrequestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  GetPullRequestResponse
 *
 * @brief  Handles CodeCommit GetPullRequest responses.
 *
 * @see    CodeCommitClient::getPullRequest
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPullRequestResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new GetPullRequestResponsePrivate(this), parent)
{
    setRequest(new GetPullRequestRequest(request));
    setReply(reply);
}

const GetPullRequestRequest * GetPullRequestResponse::request() const
{
    Q_D(const GetPullRequestResponse);
    return static_cast<const GetPullRequestRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit GetPullRequest response.
 *
 * @param  response  Response to parse.
 */
void GetPullRequestResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPullRequestResponsePrivate
 *
 * @brief  Private implementation for GetPullRequestResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPullRequestResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPullRequestResponse instance.
 */
GetPullRequestResponsePrivate::GetPullRequestResponsePrivate(
    GetPullRequestQueueResponse * const q) : GetPullRequestPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit GetPullRequestResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPullRequestResponsePrivate::GetPullRequestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPullRequestResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace AWS
