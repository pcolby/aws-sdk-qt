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

#include "deletefilesystemresponse.h"
#include "deletefilesystemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/**
 * @class  DeleteFileSystemResponse
 *
 * @brief  Handles EFS DeleteFileSystem responses.
 *
 * @see    EFSClient::deleteFileSystem
 */

/**
 * @brief  Constructs a new DeleteFileSystemResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFileSystemResponse::DeleteFileSystemResponse(
        const DeleteFileSystemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EFSResponse(new DeleteFileSystemResponsePrivate(this), parent)
{
    setRequest(new DeleteFileSystemRequest(request));
    setReply(reply);
}

const DeleteFileSystemRequest * DeleteFileSystemResponse::request() const
{
    Q_D(const DeleteFileSystemResponse);
    return static_cast<const DeleteFileSystemRequest *>(d->request);
}

/**
 * @brief  Parse a EFS DeleteFileSystem response.
 *
 * @param  response  Response to parse.
 */
void DeleteFileSystemResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteFileSystemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteFileSystemResponsePrivate
 *
 * @brief  Private implementation for DeleteFileSystemResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFileSystemResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteFileSystemResponse instance.
 */
DeleteFileSystemResponsePrivate::DeleteFileSystemResponsePrivate(
    DeleteFileSystemResponse * const q) : EFSResponsePrivate(q)
{

}

/**
 * @brief  Parse an EFS DeleteFileSystemResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteFileSystemResponsePrivate::parseDeleteFileSystemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFileSystemResponse"));
    /// @todo
}

} // namespace EFS
} // namespace QtAws
