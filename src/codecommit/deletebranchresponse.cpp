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

#include "deletebranchresponse.h"
#include "deletebranchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  DeleteBranchResponse
 *
 * @brief  Handles CodeCommit DeleteBranch responses.
 *
 * @see    CodeCommitClient::deleteBranch
 */

/**
 * @brief  Constructs a new DeleteBranchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBranchResponse::DeleteBranchResponse(
        const DeleteBranchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new DeleteBranchResponsePrivate(this), parent)
{
    setRequest(new DeleteBranchRequest(request));
    setReply(reply);
}

const DeleteBranchRequest * DeleteBranchResponse::request() const
{
    Q_D(const DeleteBranchResponse);
    return static_cast<const DeleteBranchRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit DeleteBranch response.
 *
 * @param  response  Response to parse.
 */
void DeleteBranchResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBranchResponsePrivate
 *
 * @brief  Private implementation for DeleteBranchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBranchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBranchResponse instance.
 */
DeleteBranchResponsePrivate::DeleteBranchResponsePrivate(
    DeleteBranchResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit DeleteBranchResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBranchResponsePrivate::DeleteBranchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBranchResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
