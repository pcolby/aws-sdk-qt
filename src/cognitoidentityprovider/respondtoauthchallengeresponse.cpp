// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
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
