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

#include "deleterepositoryresponse.h"
#include "deleterepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  DeleteRepositoryResponse
 *
 * @brief  Handles CodeCommit DeleteRepository responses.
 *
 * @see    CodeCommitClient::deleteRepository
 */

/**
 * @brief  Constructs a new DeleteRepositoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRepositoryResponse::DeleteRepositoryResponse(
        const DeleteRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new DeleteRepositoryResponsePrivate(this), parent)
{
    setRequest(new DeleteRepositoryRequest(request));
    setReply(reply);
}

const DeleteRepositoryRequest * DeleteRepositoryResponse::request() const
{
    Q_D(const DeleteRepositoryResponse);
    return static_cast<const DeleteRepositoryRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit DeleteRepository response.
 *
 * @param  response  Response to parse.
 */
void DeleteRepositoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRepositoryResponsePrivate
 *
 * @brief  Private implementation for DeleteRepositoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRepositoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRepositoryResponse instance.
 */
DeleteRepositoryResponsePrivate::DeleteRepositoryResponsePrivate(
    DeleteRepositoryQueueResponse * const q) : DeleteRepositoryPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit DeleteRepositoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRepositoryResponsePrivate::DeleteRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRepositoryResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace AWS
