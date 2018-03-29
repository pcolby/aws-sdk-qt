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

#include "getrepositoryresponse.h"
#include "getrepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  GetRepositoryResponse
 *
 * @brief  Handles CodeCommit GetRepository responses.
 *
 * @see    CodeCommitClient::getRepository
 */

/**
 * @brief  Constructs a new GetRepositoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRepositoryResponse::GetRepositoryResponse(
        const GetRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetRepositoryResponse(new GetRepositoryResponsePrivate(this), parent)
{
    setRequest(new GetRepositoryRequest(request));
    setReply(reply);
}

const GetRepositoryRequest * GetRepositoryResponse::request() const
{
    Q_D(const GetRepositoryResponse);
    return static_cast<const GetRepositoryRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit GetRepository response.
 *
 * @param  response  Response to parse.
 */
void GetRepositoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRepositoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRepositoryResponsePrivate
 *
 * @brief  Private implementation for GetRepositoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRepositoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRepositoryResponse instance.
 */
GetRepositoryResponsePrivate::GetRepositoryResponsePrivate(
    GetRepositoryResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit GetRepositoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRepositoryResponsePrivate::parseGetRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRepositoryResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
