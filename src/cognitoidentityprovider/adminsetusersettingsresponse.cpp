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

#include "adminsetusersettingsresponse.h"
#include "adminsetusersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserSettingsResponse
 * \brief The AdminSetUserSettingsResponse class provides an interace for CognitoIdentityProvider AdminSetUserSettings responses.
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
 * \sa CognitoIdentityProviderClient::adminSetUserSettings
 */

/*!
 * Constructs a AdminSetUserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
AdminSetUserSettingsResponse::AdminSetUserSettingsResponse(
        const AdminSetUserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminSetUserSettingsResponsePrivate(this), parent)
{
    setRequest(new AdminSetUserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminSetUserSettingsRequest * AdminSetUserSettingsResponse::request() const
{
    Q_D(const AdminSetUserSettingsResponse);
    return static_cast<const AdminSetUserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminSetUserSettings \a response.
 */
void AdminSetUserSettingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(AdminSetUserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserSettingsResponsePrivate
 * \brief The AdminSetUserSettingsResponsePrivate class provides private implementation for AdminSetUserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminSetUserSettingsResponsePrivate object with public implementation \a q.
 */
AdminSetUserSettingsResponsePrivate::AdminSetUserSettingsResponsePrivate(
    AdminSetUserSettingsResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminSetUserSettings response element from \a xml.
 */
void AdminSetUserSettingsResponsePrivate::parseAdminSetUserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminSetUserSettingsResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
