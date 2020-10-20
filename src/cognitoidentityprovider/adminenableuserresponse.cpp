/*
    Copyright 2013-2020 Paul Colby

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

#include "adminenableuserresponse.h"
#include "adminenableuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminEnableUserResponse
 * \brief The AdminEnableUserResponse class provides an interace for CognitoIdentityProvider AdminEnableUser responses.
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
 * \sa CognitoIdentityProviderClient::adminEnableUser
 */

/*!
 * Constructs a AdminEnableUserResponse object for \a reply to \a request, with parent \a parent.
 */
AdminEnableUserResponse::AdminEnableUserResponse(
        const AdminEnableUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminEnableUserResponsePrivate(this), parent)
{
    setRequest(new AdminEnableUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminEnableUserRequest * AdminEnableUserResponse::request() const
{
    Q_D(const AdminEnableUserResponse);
    return static_cast<const AdminEnableUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminEnableUser \a response.
 */
void AdminEnableUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminEnableUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminEnableUserResponsePrivate
 * \brief The AdminEnableUserResponsePrivate class provides private implementation for AdminEnableUserResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminEnableUserResponsePrivate object with public implementation \a q.
 */
AdminEnableUserResponsePrivate::AdminEnableUserResponsePrivate(
    AdminEnableUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminEnableUser response element from \a xml.
 */
void AdminEnableUserResponsePrivate::parseAdminEnableUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminEnableUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
