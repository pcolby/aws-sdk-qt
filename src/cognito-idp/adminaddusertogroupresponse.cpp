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

#include "adminaddusertogroupresponse.h"
#include "adminaddusertogroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminAddUserToGroupResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminAddUserToGroup responses.
 *
 * @see    CognitoIdentityProviderClient::adminAddUserToGroup
 */

/**
 * @brief  Constructs a new AdminAddUserToGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminAddUserToGroupResponse::AdminAddUserToGroupResponse(
        const AdminAddUserToGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminAddUserToGroupResponsePrivate(this), parent)
{
    setRequest(new AdminAddUserToGroupRequest(request));
    setReply(reply);
}

const AdminAddUserToGroupRequest * AdminAddUserToGroupResponse::request() const
{
    Q_D(const AdminAddUserToGroupResponse);
    return static_cast<const AdminAddUserToGroupRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminAddUserToGroup response.
 *
 * @param  response  Response to parse.
 */
void AdminAddUserToGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminAddUserToGroupResponsePrivate
 *
 * @brief  Private implementation for AdminAddUserToGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminAddUserToGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminAddUserToGroupResponse instance.
 */
AdminAddUserToGroupResponsePrivate::AdminAddUserToGroupResponsePrivate(
    AdminAddUserToGroupResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminAddUserToGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminAddUserToGroupResponsePrivate::AdminAddUserToGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminAddUserToGroupResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
