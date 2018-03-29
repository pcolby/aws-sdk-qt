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

#include "createpullrequestresponse.h"
#include "createpullrequestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  CreatePullRequestResponse
 *
 * @brief  Handles CodeCommit CreatePullRequest responses.
 *
 * @see    CodeCommitClient::createPullRequest
 */

/**
 * @brief  Constructs a new CreatePullRequestResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePullRequestResponse::CreatePullRequestResponse(
        const CreatePullRequestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreatePullRequestResponse(new CreatePullRequestResponsePrivate(this), parent)
{
    setRequest(new CreatePullRequestRequest(request));
    setReply(reply);
}

const CreatePullRequestRequest * CreatePullRequestResponse::request() const
{
    Q_D(const CreatePullRequestResponse);
    return static_cast<const CreatePullRequestRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit CreatePullRequest response.
 *
 * @param  response  Response to parse.
 */
void CreatePullRequestResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreatePullRequestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePullRequestResponsePrivate
 *
 * @brief  Private implementation for CreatePullRequestResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePullRequestResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePullRequestResponse instance.
 */
CreatePullRequestResponsePrivate::CreatePullRequestResponsePrivate(
    CreatePullRequestResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit CreatePullRequestResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePullRequestResponsePrivate::parseCreatePullRequestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePullRequestResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
