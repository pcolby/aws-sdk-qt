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

#include "createbranchresponse.h"
#include "createbranchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  CreateBranchResponse
 *
 * @brief  Handles CodeCommit CreateBranch responses.
 *
 * @see    CodeCommitClient::createBranch
 */

/**
 * @brief  Constructs a new CreateBranchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateBranchResponse::CreateBranchResponse(
        const CreateBranchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new CreateBranchResponsePrivate(this), parent)
{
    setRequest(new CreateBranchRequest(request));
    setReply(reply);
}

const CreateBranchRequest * CreateBranchResponse::request() const
{
    Q_D(const CreateBranchResponse);
    return static_cast<const CreateBranchRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit CreateBranch response.
 *
 * @param  response  Response to parse.
 */
void CreateBranchResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateBranchResponsePrivate
 *
 * @brief  Private implementation for CreateBranchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBranchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateBranchResponse instance.
 */
CreateBranchResponsePrivate::CreateBranchResponsePrivate(
    CreateBranchResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit CreateBranchResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateBranchResponsePrivate::CreateBranchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBranchResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
