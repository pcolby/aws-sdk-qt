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

#include "admindisableproviderforuserresponse.h"
#include "admindisableproviderforuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDisableProviderForUserResponse
 * \brief The AdminDisableProviderForUserResponse class provides an interace for CognitoIdentityProvider AdminDisableProviderForUser responses.
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
 * \sa CognitoIdentityProviderClient::adminDisableProviderForUser
 */

/*!
 * Constructs a AdminDisableProviderForUserResponse object for \a reply to \a request, with parent \a parent.
 */
AdminDisableProviderForUserResponse::AdminDisableProviderForUserResponse(
        const AdminDisableProviderForUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminDisableProviderForUserResponsePrivate(this), parent)
{
    setRequest(new AdminDisableProviderForUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminDisableProviderForUserRequest * AdminDisableProviderForUserResponse::request() const
{
    Q_D(const AdminDisableProviderForUserResponse);
    return static_cast<const AdminDisableProviderForUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminDisableProviderForUser \a response.
 */
void AdminDisableProviderForUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminDisableProviderForUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDisableProviderForUserResponsePrivate
 * \brief The AdminDisableProviderForUserResponsePrivate class provides private implementation for AdminDisableProviderForUserResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminDisableProviderForUserResponsePrivate object with public implementation \a q.
 */
AdminDisableProviderForUserResponsePrivate::AdminDisableProviderForUserResponsePrivate(
    AdminDisableProviderForUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminDisableProviderForUser response element from \a xml.
 */
void AdminDisableProviderForUserResponsePrivate::parseAdminDisableProviderForUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminDisableProviderForUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
