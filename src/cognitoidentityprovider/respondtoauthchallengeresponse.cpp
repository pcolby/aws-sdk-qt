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

#include "respondtoauthchallengeresponse.h"
#include "respondtoauthchallengeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::RespondToAuthChallengeResponse
 * \brief The RespondToAuthChallengeResponse class provides an interace for CognitoIdentityProvider RespondToAuthChallenge responses.
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
 * \sa CognitoIdentityProviderClient::respondToAuthChallenge
 */

/*!
 * Constructs a RespondToAuthChallengeResponse object for \a reply to \a request, with parent \a parent.
 */
RespondToAuthChallengeResponse::RespondToAuthChallengeResponse(
        const RespondToAuthChallengeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new RespondToAuthChallengeResponsePrivate(this), parent)
{
    setRequest(new RespondToAuthChallengeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RespondToAuthChallengeRequest * RespondToAuthChallengeResponse::request() const
{
    Q_D(const RespondToAuthChallengeResponse);
    return static_cast<const RespondToAuthChallengeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider RespondToAuthChallenge \a response.
 */
void RespondToAuthChallengeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RespondToAuthChallengeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::RespondToAuthChallengeResponsePrivate
 * \brief The RespondToAuthChallengeResponsePrivate class provides private implementation for RespondToAuthChallengeResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a RespondToAuthChallengeResponsePrivate object with public implementation \a q.
 */
RespondToAuthChallengeResponsePrivate::RespondToAuthChallengeResponsePrivate(
    RespondToAuthChallengeResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider RespondToAuthChallenge response element from \a xml.
 */
void RespondToAuthChallengeResponsePrivate::parseRespondToAuthChallengeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RespondToAuthChallengeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
