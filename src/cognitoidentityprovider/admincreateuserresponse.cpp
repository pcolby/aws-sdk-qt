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

#include "admincreateuserresponse.h"
#include "admincreateuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminCreateUserResponse
 * \brief The AdminCreateUserResponse class provides an interace for CognitoIdentityProvider AdminCreateUser responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::adminCreateUser
 */

/*!
 * Constructs a AdminCreateUserResponse object for \a reply to \a request, with parent \a parent.
 */
AdminCreateUserResponse::AdminCreateUserResponse(
        const AdminCreateUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminCreateUserResponsePrivate(this), parent)
{
    setRequest(new AdminCreateUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminCreateUserRequest * AdminCreateUserResponse::request() const
{
    Q_D(const AdminCreateUserResponse);
    return static_cast<const AdminCreateUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminCreateUser \a response.
 */
void AdminCreateUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminCreateUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminCreateUserResponsePrivate
 * \brief The AdminCreateUserResponsePrivate class provides private implementation for AdminCreateUserResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminCreateUserResponsePrivate object with public implementation \a q.
 */
AdminCreateUserResponsePrivate::AdminCreateUserResponsePrivate(
    AdminCreateUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminCreateUser response element from \a xml.
 */
void AdminCreateUserResponsePrivate::parseAdminCreateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminCreateUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
