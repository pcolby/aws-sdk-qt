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

#include "deleteuserresponse.h"
#include "deleteuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/**
 * @class  DeleteUserResponse
 *
 * @brief  Handles WorkMail DeleteUser responses.
 *
 * @see    WorkMailClient::deleteUser
 */

/**
 * @brief  Constructs a new DeleteUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUserResponse::DeleteUserResponse(
        const DeleteUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new DeleteUserResponsePrivate(this), parent)
{
    setRequest(new DeleteUserRequest(request));
    setReply(reply);
}

const DeleteUserRequest * DeleteUserResponse::request() const
{
    Q_D(const DeleteUserResponse);
    return static_cast<const DeleteUserRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail DeleteUser response.
 *
 * @param  response  Response to parse.
 */
void DeleteUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteUserResponsePrivate
 *
 * @brief  Private implementation for DeleteUserResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteUserResponse instance.
 */
DeleteUserResponsePrivate::DeleteUserResponsePrivate(
    DeleteUserResponse * const q) : WorkMailResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkMail DeleteUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteUserResponsePrivate::parseDeleteUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws
