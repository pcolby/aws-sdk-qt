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

#include "admininitiateauthresponse.h"
#include "admininitiateauthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminInitiateAuthResponse
 * \brief The AdminInitiateAuthResponse class provides an interace for CognitoIdentityProvider AdminInitiateAuth responses.
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
 * \sa CognitoIdentityProviderClient::adminInitiateAuth
 */

/*!
 * Constructs a AdminInitiateAuthResponse object for \a reply to \a request, with parent \a parent.
 */
AdminInitiateAuthResponse::AdminInitiateAuthResponse(
        const AdminInitiateAuthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminInitiateAuthResponsePrivate(this), parent)
{
    setRequest(new AdminInitiateAuthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminInitiateAuthRequest * AdminInitiateAuthResponse::request() const
{
    Q_D(const AdminInitiateAuthResponse);
    return static_cast<const AdminInitiateAuthRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminInitiateAuth \a response.
 */
void AdminInitiateAuthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminInitiateAuthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminInitiateAuthResponsePrivate
 * \brief The AdminInitiateAuthResponsePrivate class provides private implementation for AdminInitiateAuthResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminInitiateAuthResponsePrivate object with public implementation \a q.
 */
AdminInitiateAuthResponsePrivate::AdminInitiateAuthResponsePrivate(
    AdminInitiateAuthResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminInitiateAuth response element from \a xml.
 */
void AdminInitiateAuthResponsePrivate::parseAdminInitiateAuthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminInitiateAuthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
