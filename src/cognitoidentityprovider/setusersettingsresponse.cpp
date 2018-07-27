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

#include "setusersettingsresponse.h"
#include "setusersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::SetUserSettingsResponse
 * \brief The SetUserSettingsResponse class provides an interace for CognitoIdentityProvider SetUserSettings responses.
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
 * \sa CognitoIdentityProviderClient::setUserSettings
 */

/*!
 * Constructs a SetUserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
SetUserSettingsResponse::SetUserSettingsResponse(
        const SetUserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new SetUserSettingsResponsePrivate(this), parent)
{
    setRequest(new SetUserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetUserSettingsRequest * SetUserSettingsResponse::request() const
{
    Q_D(const SetUserSettingsResponse);
    return static_cast<const SetUserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider SetUserSettings \a response.
 */
void SetUserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetUserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::SetUserSettingsResponsePrivate
 * \brief The SetUserSettingsResponsePrivate class provides private implementation for SetUserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a SetUserSettingsResponsePrivate object with public implementation \a q.
 */
SetUserSettingsResponsePrivate::SetUserSettingsResponsePrivate(
    SetUserSettingsResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider SetUserSettings response element from \a xml.
 */
void SetUserSettingsResponsePrivate::parseSetUserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetUserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
