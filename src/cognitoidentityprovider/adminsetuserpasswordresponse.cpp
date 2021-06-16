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

#include "adminsetuserpasswordresponse.h"
#include "adminsetuserpasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserPasswordResponse
 * \brief The AdminSetUserPasswordResponse class provides an interace for CognitoIdentityProvider AdminSetUserPassword responses.
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
 * \sa CognitoIdentityProviderClient::adminSetUserPassword
 */

/*!
 * Constructs a AdminSetUserPasswordResponse object for \a reply to \a request, with parent \a parent.
 */
AdminSetUserPasswordResponse::AdminSetUserPasswordResponse(
        const AdminSetUserPasswordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminSetUserPasswordResponsePrivate(this), parent)
{
    setRequest(new AdminSetUserPasswordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminSetUserPasswordRequest * AdminSetUserPasswordResponse::request() const
{
    Q_D(const AdminSetUserPasswordResponse);
    return static_cast<const AdminSetUserPasswordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminSetUserPassword \a response.
 */
void AdminSetUserPasswordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminSetUserPasswordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserPasswordResponsePrivate
 * \brief The AdminSetUserPasswordResponsePrivate class provides private implementation for AdminSetUserPasswordResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminSetUserPasswordResponsePrivate object with public implementation \a q.
 */
AdminSetUserPasswordResponsePrivate::AdminSetUserPasswordResponsePrivate(
    AdminSetUserPasswordResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminSetUserPassword response element from \a xml.
 */
void AdminSetUserPasswordResponsePrivate::parseAdminSetUserPasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminSetUserPasswordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
