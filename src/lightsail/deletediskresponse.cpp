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

#include "deletediskresponse.h"
#include "deletediskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  DeleteDiskResponse
 *
 * @brief  Handles Lightsail DeleteDisk responses.
 *
 * @see    LightsailClient::deleteDisk
 */

/**
 * @brief  Constructs a new DeleteDiskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDiskResponse::DeleteDiskResponse(
        const DeleteDiskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DeleteDiskResponsePrivate(this), parent)
{
    setRequest(new DeleteDiskRequest(request));
    setReply(reply);
}

const DeleteDiskRequest * DeleteDiskResponse::request() const
{
    Q_D(const DeleteDiskResponse);
    return static_cast<const DeleteDiskRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail DeleteDisk response.
 *
 * @param  response  Response to parse.
 */
void DeleteDiskResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDiskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDiskResponsePrivate
 *
 * @brief  Private implementation for DeleteDiskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDiskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDiskResponse instance.
 */
DeleteDiskResponsePrivate::DeleteDiskResponsePrivate(
    DeleteDiskResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail DeleteDiskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDiskResponsePrivate::DeleteDiskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDiskResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
