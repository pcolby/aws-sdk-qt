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

#include "listusersingroupresponse.h"
#include "listusersingroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListUsersInGroupResponse
 *
 * \brief The ListUsersInGroupResponse class provides an interace for CognitoIdentityProvider ListUsersInGroup responses.
 *
 * \ingroup CognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::listUsersInGroup
 */

/*!
 * @brief  Constructs a new ListUsersInGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListUsersInGroupResponse::ListUsersInGroupResponse(
        const ListUsersInGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ListUsersInGroupResponsePrivate(this), parent)
{
    setRequest(new ListUsersInGroupRequest(request));
    setReply(reply);
}

const ListUsersInGroupRequest * ListUsersInGroupResponse::request() const
{
    Q_D(const ListUsersInGroupResponse);
    return static_cast<const ListUsersInGroupRequest *>(d->request);
}

/*!
 * @brief  Parse a CognitoIdentityProvider ListUsersInGroup response.
 *
 * @param  response  Response to parse.
 */
void ListUsersInGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListUsersInGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListUsersInGroupResponsePrivate
 *
 * \brief Private implementation for ListUsersInGroupResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListUsersInGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListUsersInGroupResponse instance.
 */
ListUsersInGroupResponsePrivate::ListUsersInGroupResponsePrivate(
    ListUsersInGroupResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CognitoIdentityProvider ListUsersInGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListUsersInGroupResponsePrivate::parseListUsersInGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUsersInGroupResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
