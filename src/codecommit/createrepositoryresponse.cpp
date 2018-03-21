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

#include "createrepositoryresponse.h"
#include "createrepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  CreateRepositoryResponse
 *
 * @brief  Handles CodeCommit CreateRepository responses.
 *
 * @see    CodeCommitClient::createRepository
 */

/**
 * @brief  Constructs a new CreateRepositoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRepositoryResponse::CreateRepositoryResponse(
        const CreateRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new CreateRepositoryResponsePrivate(this), parent)
{
    setRequest(new CreateRepositoryRequest(request));
    setReply(reply);
}

const CreateRepositoryRequest * CreateRepositoryResponse::request() const
{
    Q_D(const CreateRepositoryResponse);
    return static_cast<const CreateRepositoryRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit CreateRepository response.
 *
 * @param  response  Response to parse.
 */
void CreateRepositoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateRepositoryResponsePrivate
 *
 * @brief  Private implementation for CreateRepositoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRepositoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateRepositoryResponse instance.
 */
CreateRepositoryResponsePrivate::CreateRepositoryResponsePrivate(
    CreateRepositoryQueueResponse * const q) : CreateRepositoryPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit CreateRepositoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateRepositoryResponsePrivate::CreateRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRepositoryResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace AWS
