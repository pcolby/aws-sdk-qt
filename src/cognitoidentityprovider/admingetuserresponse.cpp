/*
    Copyright 2013-2021 Paul Colby

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

#include "admingetuserresponse.h"
#include "admingetuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminGetUserResponse
 * \brief The AdminGetUserResponse class provides an interace for CognitoIdentityProvider AdminGetUser responses.
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
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::adminGetUser
 */

/*!
 * Constructs a AdminGetUserResponse object for \a reply to \a request, with parent \a parent.
 */
AdminGetUserResponse::AdminGetUserResponse(
        const AdminGetUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminGetUserResponsePrivate(this), parent)
{
    setRequest(new AdminGetUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminGetUserRequest * AdminGetUserResponse::request() const
{
    return static_cast<const AdminGetUserRequest *>(CognitoIdentityProviderResponse::request());
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminGetUser \a response.
 */
void AdminGetUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminGetUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminGetUserResponsePrivate
 * \brief The AdminGetUserResponsePrivate class provides private implementation for AdminGetUserResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminGetUserResponsePrivate object with public implementation \a q.
 */
AdminGetUserResponsePrivate::AdminGetUserResponsePrivate(
    AdminGetUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminGetUser response element from \a xml.
 */
void AdminGetUserResponsePrivate::parseAdminGetUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminGetUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
