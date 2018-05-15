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

#include "adminresetuserpasswordresponse.h"
#include "adminresetuserpasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminResetUserPasswordResponse
 * \brief The AdminResetUserPasswordResponse class provides an interace for CognitoIdentityProvider AdminResetUserPassword responses.
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
 * \sa CognitoIdentityProviderClient::adminResetUserPassword
 */

/*!
 * Constructs a AdminResetUserPasswordResponse object for \a reply to \a request, with parent \a parent.
 */
AdminResetUserPasswordResponse::AdminResetUserPasswordResponse(
        const AdminResetUserPasswordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminResetUserPasswordResponsePrivate(this), parent)
{
    setRequest(new AdminResetUserPasswordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminResetUserPasswordRequest * AdminResetUserPasswordResponse::request() const
{
    Q_D(const AdminResetUserPasswordResponse);
    return static_cast<const AdminResetUserPasswordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminResetUserPassword \a response.
 */
void AdminResetUserPasswordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminResetUserPasswordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminResetUserPasswordResponsePrivate
 * \brief The AdminResetUserPasswordResponsePrivate class provides private implementation for AdminResetUserPasswordResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminResetUserPasswordResponsePrivate object with public implementation \a q.
 */
AdminResetUserPasswordResponsePrivate::AdminResetUserPasswordResponsePrivate(
    AdminResetUserPasswordResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminResetUserPassword response element from \a xml.
 */
void AdminResetUserPasswordResponsePrivate::parseAdminResetUserPasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminResetUserPasswordResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
