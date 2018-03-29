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

#include "listbranchesresponse.h"
#include "listbranchesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  ListBranchesResponse
 *
 * @brief  Handles CodeCommit ListBranches responses.
 *
 * @see    CodeCommitClient::listBranches
 */

/**
 * @brief  Constructs a new ListBranchesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBranchesResponse::ListBranchesResponse(
        const ListBranchesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new ListBranchesResponsePrivate(this), parent)
{
    setRequest(new ListBranchesRequest(request));
    setReply(reply);
}

const ListBranchesRequest * ListBranchesResponse::request() const
{
    Q_D(const ListBranchesResponse);
    return static_cast<const ListBranchesRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit ListBranches response.
 *
 * @param  response  Response to parse.
 */
void ListBranchesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListBranchesResponsePrivate
 *
 * @brief  Private implementation for ListBranchesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBranchesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListBranchesResponse instance.
 */
ListBranchesResponsePrivate::ListBranchesResponsePrivate(
    ListBranchesResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit ListBranchesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListBranchesResponsePrivate::ListBranchesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBranchesResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
