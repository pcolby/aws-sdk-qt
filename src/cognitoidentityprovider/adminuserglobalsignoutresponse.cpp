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

#include "adminuserglobalsignoutresponse.h"
#include "adminuserglobalsignoutresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUserGlobalSignOutResponse
 * \brief The AdminUserGlobalSignOutResponse class provides an interace for CognitoIdentityProvider AdminUserGlobalSignOut responses.
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
 * \sa CognitoIdentityProviderClient::adminUserGlobalSignOut
 */

/*!
 * Constructs a AdminUserGlobalSignOutResponse object for \a reply to \a request, with parent \a parent.
 */
AdminUserGlobalSignOutResponse::AdminUserGlobalSignOutResponse(
        const AdminUserGlobalSignOutRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminUserGlobalSignOutResponsePrivate(this), parent)
{
    setRequest(new AdminUserGlobalSignOutRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminUserGlobalSignOutRequest * AdminUserGlobalSignOutResponse::request() const
{
    Q_D(const AdminUserGlobalSignOutResponse);
    return static_cast<const AdminUserGlobalSignOutRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminUserGlobalSignOut \a response.
 */
void AdminUserGlobalSignOutResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminUserGlobalSignOutResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUserGlobalSignOutResponsePrivate
 * \brief The AdminUserGlobalSignOutResponsePrivate class provides private implementation for AdminUserGlobalSignOutResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminUserGlobalSignOutResponsePrivate object with public implementation \a q.
 */
AdminUserGlobalSignOutResponsePrivate::AdminUserGlobalSignOutResponsePrivate(
    AdminUserGlobalSignOutResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminUserGlobalSignOut response element from \a xml.
 */
void AdminUserGlobalSignOutResponsePrivate::parseAdminUserGlobalSignOutResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminUserGlobalSignOutResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
