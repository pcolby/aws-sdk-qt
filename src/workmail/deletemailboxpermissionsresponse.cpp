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

#include "deletemailboxpermissionsresponse.h"
#include "deletemailboxpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/**
 * @class  DeleteMailboxPermissionsResponse
 *
 * @brief  Handles WorkMail DeleteMailboxPermissions responses.
 *
 * @see    WorkMailClient::deleteMailboxPermissions
 */

/**
 * @brief  Constructs a new DeleteMailboxPermissionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteMailboxPermissionsResponse::DeleteMailboxPermissionsResponse(
        const DeleteMailboxPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new DeleteMailboxPermissionsResponsePrivate(this), parent)
{
    setRequest(new DeleteMailboxPermissionsRequest(request));
    setReply(reply);
}

const DeleteMailboxPermissionsRequest * DeleteMailboxPermissionsResponse::request() const
{
    Q_D(const DeleteMailboxPermissionsResponse);
    return static_cast<const DeleteMailboxPermissionsRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail DeleteMailboxPermissions response.
 *
 * @param  response  Response to parse.
 */
void DeleteMailboxPermissionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteMailboxPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteMailboxPermissionsResponsePrivate
 *
 * @brief  Private implementation for DeleteMailboxPermissionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMailboxPermissionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteMailboxPermissionsResponse instance.
 */
DeleteMailboxPermissionsResponsePrivate::DeleteMailboxPermissionsResponsePrivate(
    DeleteMailboxPermissionsResponse * const q) : WorkMailResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkMail DeleteMailboxPermissionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteMailboxPermissionsResponsePrivate::parseDeleteMailboxPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMailboxPermissionsResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws
