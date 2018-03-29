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

#include "getbranchresponse.h"
#include "getbranchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  GetBranchResponse
 *
 * @brief  Handles CodeCommit GetBranch responses.
 *
 * @see    CodeCommitClient::getBranch
 */

/**
 * @brief  Constructs a new GetBranchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBranchResponse::GetBranchResponse(
        const GetBranchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new GetBranchResponsePrivate(this), parent)
{
    setRequest(new GetBranchRequest(request));
    setReply(reply);
}

const GetBranchRequest * GetBranchResponse::request() const
{
    Q_D(const GetBranchResponse);
    return static_cast<const GetBranchRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit GetBranch response.
 *
 * @param  response  Response to parse.
 */
void GetBranchResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBranchResponsePrivate
 *
 * @brief  Private implementation for GetBranchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBranchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBranchResponse instance.
 */
GetBranchResponsePrivate::GetBranchResponsePrivate(
    GetBranchResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit GetBranchResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBranchResponsePrivate::GetBranchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBranchResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
