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

#include "createfilesystemresponse.h"
#include "createfilesystemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EFS {

/**
 * @class  CreateFileSystemResponse
 *
 * @brief  Handles EFS CreateFileSystem responses.
 *
 * @see    EFSClient::createFileSystem
 */

/**
 * @brief  Constructs a new CreateFileSystemResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateFileSystemResponse::CreateFileSystemResponse(
        const CreateFileSystemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EFSResponse(new CreateFileSystemResponsePrivate(this), parent)
{
    setRequest(new CreateFileSystemRequest(request));
    setReply(reply);
}

const CreateFileSystemRequest * CreateFileSystemResponse::request() const
{
    Q_D(const CreateFileSystemResponse);
    return static_cast<const CreateFileSystemRequest *>(d->request);
}

/**
 * @brief  Parse a EFS CreateFileSystem response.
 *
 * @param  response  Response to parse.
 */
void CreateFileSystemResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateFileSystemResponsePrivate
 *
 * @brief  Private implementation for CreateFileSystemResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFileSystemResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateFileSystemResponse instance.
 */
CreateFileSystemResponsePrivate::CreateFileSystemResponsePrivate(
    CreateFileSystemQueueResponse * const q) : CreateFileSystemPrivate(q)
{

}

/**
 * @brief  Parse an EFS CreateFileSystemResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateFileSystemResponsePrivate::CreateFileSystemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFileSystemResponse"));
    /// @todo
}

} // namespace EFS
} // namespace AWS
