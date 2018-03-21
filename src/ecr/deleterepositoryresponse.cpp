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

#include "deleterepositoryresponse.h"
#include "deleterepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECR {

/**
 * @class  DeleteRepositoryResponse
 *
 * @brief  Handles ECR DeleteRepository responses.
 *
 * @see    ECRClient::deleteRepository
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRepositoryResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new DeleteRepositoryResponsePrivate(this), parent)
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
 * @brief  Parse a ECR DeleteRepository response.
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
 * @brief  Parse an ECR DeleteRepositoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRepositoryResponsePrivate::DeleteRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRepositoryResponse"));
    /// @todo
}

} // namespace ECR
} // namespace AWS
