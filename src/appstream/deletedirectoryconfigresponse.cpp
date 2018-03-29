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

#include "deletedirectoryconfigresponse.h"
#include "deletedirectoryconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/**
 * @class  DeleteDirectoryConfigResponse
 *
 * @brief  Handles AppStream DeleteDirectoryConfig responses.
 *
 * @see    AppStreamClient::deleteDirectoryConfig
 */

/**
 * @brief  Constructs a new DeleteDirectoryConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDirectoryConfigResponse::DeleteDirectoryConfigResponse(
        const DeleteDirectoryConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DeleteDirectoryConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteDirectoryConfigRequest(request));
    setReply(reply);
}

const DeleteDirectoryConfigRequest * DeleteDirectoryConfigResponse::request() const
{
    Q_D(const DeleteDirectoryConfigResponse);
    return static_cast<const DeleteDirectoryConfigRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream DeleteDirectoryConfig response.
 *
 * @param  response  Response to parse.
 */
void DeleteDirectoryConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDirectoryConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDirectoryConfigResponsePrivate
 *
 * @brief  Private implementation for DeleteDirectoryConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDirectoryConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDirectoryConfigResponse instance.
 */
DeleteDirectoryConfigResponsePrivate::DeleteDirectoryConfigResponsePrivate(
    DeleteDirectoryConfigResponse * const q) : AppStreamResponsePrivate(q)
{

}

/**
 * @brief  Parse an AppStream DeleteDirectoryConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDirectoryConfigResponsePrivate::DeleteDirectoryConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDirectoryConfigResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace QtAws
