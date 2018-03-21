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

#include "deletedirectoryresponse.h"
#include "deletedirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  DeleteDirectoryResponse
 *
 * @brief  Handles DirectoryService DeleteDirectory responses.
 *
 * @see    DirectoryServiceClient::deleteDirectory
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDirectoryResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DeleteDirectoryResponsePrivate(this), parent)
{
    setRequest(new DeleteDirectoryRequest(request));
    setReply(reply);
}

const DeleteDirectoryRequest * DeleteDirectoryResponse::request() const
{
    Q_D(const DeleteDirectoryResponse);
    return static_cast<const DeleteDirectoryRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService DeleteDirectory response.
 *
 * @param  response  Response to parse.
 */
void DeleteDirectoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDirectoryResponsePrivate
 *
 * @brief  Private implementation for DeleteDirectoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDirectoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDirectoryResponse instance.
 */
DeleteDirectoryResponsePrivate::DeleteDirectoryResponsePrivate(
    DeleteDirectoryQueueResponse * const q) : DeleteDirectoryPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService DeleteDirectoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDirectoryResponsePrivate::DeleteDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDirectoryResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
