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

#include "adminlinkproviderforuserresponse.h"
#include "adminlinkproviderforuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminLinkProviderForUserResponse
 * \brief The AdminLinkProviderForUserResponse class provides an interace for CognitoIdentityProvider AdminLinkProviderForUser responses.
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
 * \sa CognitoIdentityProviderClient::adminLinkProviderForUser
 */

/*!
 * Constructs a AdminLinkProviderForUserResponse object for \a reply to \a request, with parent \a parent.
 */
AdminLinkProviderForUserResponse::AdminLinkProviderForUserResponse(
        const AdminLinkProviderForUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminLinkProviderForUserResponsePrivate(this), parent)
{
    setRequest(new AdminLinkProviderForUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminLinkProviderForUserRequest * AdminLinkProviderForUserResponse::request() const
{
    Q_D(const AdminLinkProviderForUserResponse);
    return static_cast<const AdminLinkProviderForUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminLinkProviderForUser \a response.
 */
void AdminLinkProviderForUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminLinkProviderForUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminLinkProviderForUserResponsePrivate
 * \brief The AdminLinkProviderForUserResponsePrivate class provides private implementation for AdminLinkProviderForUserResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminLinkProviderForUserResponsePrivate object with public implementation \a q.
 */
AdminLinkProviderForUserResponsePrivate::AdminLinkProviderForUserResponsePrivate(
    AdminLinkProviderForUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminLinkProviderForUser response element from \a xml.
 */
void AdminLinkProviderForUserResponsePrivate::parseAdminLinkProviderForUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminLinkProviderForUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
