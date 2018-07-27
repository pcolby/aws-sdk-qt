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

#include "setusermfapreferenceresponse.h"
#include "setusermfapreferenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::SetUserMFAPreferenceResponse
 * \brief The SetUserMFAPreferenceResponse class provides an interace for CognitoIdentityProvider SetUserMFAPreference responses.
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
 * \sa CognitoIdentityProviderClient::setUserMFAPreference
 */

/*!
 * Constructs a SetUserMFAPreferenceResponse object for \a reply to \a request, with parent \a parent.
 */
SetUserMFAPreferenceResponse::SetUserMFAPreferenceResponse(
        const SetUserMFAPreferenceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new SetUserMFAPreferenceResponsePrivate(this), parent)
{
    setRequest(new SetUserMFAPreferenceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetUserMFAPreferenceRequest * SetUserMFAPreferenceResponse::request() const
{
    Q_D(const SetUserMFAPreferenceResponse);
    return static_cast<const SetUserMFAPreferenceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider SetUserMFAPreference \a response.
 */
void SetUserMFAPreferenceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetUserMFAPreferenceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::SetUserMFAPreferenceResponsePrivate
 * \brief The SetUserMFAPreferenceResponsePrivate class provides private implementation for SetUserMFAPreferenceResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a SetUserMFAPreferenceResponsePrivate object with public implementation \a q.
 */
SetUserMFAPreferenceResponsePrivate::SetUserMFAPreferenceResponsePrivate(
    SetUserMFAPreferenceResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider SetUserMFAPreference response element from \a xml.
 */
void SetUserMFAPreferenceResponsePrivate::parseSetUserMFAPreferenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetUserMFAPreferenceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
