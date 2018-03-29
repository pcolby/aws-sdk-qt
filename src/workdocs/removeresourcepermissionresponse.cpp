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

#include "removeresourcepermissionresponse.h"
#include "removeresourcepermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  RemoveResourcePermissionResponse
 *
 * @brief  Handles WorkDocs RemoveResourcePermission responses.
 *
 * @see    WorkDocsClient::removeResourcePermission
 */

/**
 * @brief  Constructs a new RemoveResourcePermissionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveResourcePermissionResponse::RemoveResourcePermissionResponse(
        const RemoveResourcePermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new RemoveResourcePermissionResponsePrivate(this), parent)
{
    setRequest(new RemoveResourcePermissionRequest(request));
    setReply(reply);
}

const RemoveResourcePermissionRequest * RemoveResourcePermissionResponse::request() const
{
    Q_D(const RemoveResourcePermissionResponse);
    return static_cast<const RemoveResourcePermissionRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs RemoveResourcePermission response.
 *
 * @param  response  Response to parse.
 */
void RemoveResourcePermissionResponse::parseSuccess(QIODevice &response)
{
    Q_D(RemoveResourcePermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveResourcePermissionResponsePrivate
 *
 * @brief  Private implementation for RemoveResourcePermissionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveResourcePermissionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveResourcePermissionResponse instance.
 */
RemoveResourcePermissionResponsePrivate::RemoveResourcePermissionResponsePrivate(
    RemoveResourcePermissionResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs RemoveResourcePermissionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveResourcePermissionResponsePrivate::RemoveResourcePermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveResourcePermissionResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
