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

#include "deletegithubaccounttokenresponse.h"
#include "deletegithubaccounttokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  DeleteGitHubAccountTokenResponse
 *
 * @brief  Handles CodeDeploy DeleteGitHubAccountToken responses.
 *
 * @see    CodeDeployClient::deleteGitHubAccountToken
 */

/**
 * @brief  Constructs a new DeleteGitHubAccountTokenResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteGitHubAccountTokenResponse::DeleteGitHubAccountTokenResponse(
        const DeleteGitHubAccountTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new DeleteGitHubAccountTokenResponsePrivate(this), parent)
{
    setRequest(new DeleteGitHubAccountTokenRequest(request));
    setReply(reply);
}

const DeleteGitHubAccountTokenRequest * DeleteGitHubAccountTokenResponse::request() const
{
    Q_D(const DeleteGitHubAccountTokenResponse);
    return static_cast<const DeleteGitHubAccountTokenRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy DeleteGitHubAccountToken response.
 *
 * @param  response  Response to parse.
 */
void DeleteGitHubAccountTokenResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteGitHubAccountTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteGitHubAccountTokenResponsePrivate
 *
 * @brief  Private implementation for DeleteGitHubAccountTokenResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGitHubAccountTokenResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteGitHubAccountTokenResponse instance.
 */
DeleteGitHubAccountTokenResponsePrivate::DeleteGitHubAccountTokenResponsePrivate(
    DeleteGitHubAccountTokenResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy DeleteGitHubAccountTokenResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteGitHubAccountTokenResponsePrivate::parseDeleteGitHubAccountTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGitHubAccountTokenResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
