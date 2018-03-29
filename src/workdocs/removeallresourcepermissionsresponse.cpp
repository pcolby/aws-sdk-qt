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

#include "removeallresourcepermissionsresponse.h"
#include "removeallresourcepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  RemoveAllResourcePermissionsResponse
 *
 * @brief  Handles WorkDocs RemoveAllResourcePermissions responses.
 *
 * @see    WorkDocsClient::removeAllResourcePermissions
 */

/**
 * @brief  Constructs a new RemoveAllResourcePermissionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveAllResourcePermissionsResponse::RemoveAllResourcePermissionsResponse(
        const RemoveAllResourcePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new RemoveAllResourcePermissionsResponsePrivate(this), parent)
{
    setRequest(new RemoveAllResourcePermissionsRequest(request));
    setReply(reply);
}

const RemoveAllResourcePermissionsRequest * RemoveAllResourcePermissionsResponse::request() const
{
    Q_D(const RemoveAllResourcePermissionsResponse);
    return static_cast<const RemoveAllResourcePermissionsRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs RemoveAllResourcePermissions response.
 *
 * @param  response  Response to parse.
 */
void RemoveAllResourcePermissionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveAllResourcePermissionsResponsePrivate
 *
 * @brief  Private implementation for RemoveAllResourcePermissionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveAllResourcePermissionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveAllResourcePermissionsResponse instance.
 */
RemoveAllResourcePermissionsResponsePrivate::RemoveAllResourcePermissionsResponsePrivate(
    RemoveAllResourcePermissionsQueueResponse * const q) : RemoveAllResourcePermissionsPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs RemoveAllResourcePermissionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveAllResourcePermissionsResponsePrivate::RemoveAllResourcePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveAllResourcePermissionsResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace AWS
