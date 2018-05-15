/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "adminaddusertogroupresponse.h"
#include "adminaddusertogroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminAddUserToGroupResponse
 * \brief The AdminAddUserToGroupResponse class provides an interace for CognitoIdentityProvider AdminAddUserToGroup responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
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
 * \sa CognitoIdentityProviderClient::adminAddUserToGroup
 */

/*!
 * Constructs a AdminAddUserToGroupResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const AdminAddUserToGroupRequest * AdminAddUserToGroupResponse::request() const
{
    Q_D(const AdminAddUserToGroupResponse);
    return static_cast<const AdminAddUserToGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminAddUserToGroup \a response.
 */
void AdminAddUserToGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminAddUserToGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminAddUserToGroupResponsePrivate
 * \brief The AdminAddUserToGroupResponsePrivate class provides private implementation for AdminAddUserToGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminAddUserToGroupResponsePrivate object with public implementation \a q.
 */
AdminAddUserToGroupResponsePrivate::AdminAddUserToGroupResponsePrivate(
    AdminAddUserToGroupResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminAddUserToGroup response element from \a xml.
 */
void AdminAddUserToGroupResponsePrivate::parseAdminAddUserToGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminAddUserToGroupResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
