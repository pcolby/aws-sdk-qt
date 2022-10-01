// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "initiateauthresponse.h"
#include "initiateauthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::InitiateAuthResponse
 * \brief The InitiateAuthResponse class provides an interace for CognitoIdentityProvider InitiateAuth responses.
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
 * \sa CognitoIdentityProviderClient::initiateAuth
 */

/*!
 * Constructs a InitiateAuthResponse object for \a reply to \a request, with parent \a parent.
 */
InitiateAuthResponse::InitiateAuthResponse(
        const InitiateAuthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new InitiateAuthResponsePrivate(this), parent)
{
    setRequest(new InitiateAuthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InitiateAuthRequest * InitiateAuthResponse::request() const
{
    Q_D(const InitiateAuthResponse);
    return static_cast<const InitiateAuthRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider InitiateAuth \a response.
 */
void InitiateAuthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InitiateAuthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::InitiateAuthResponsePrivate
 * \brief The InitiateAuthResponsePrivate class provides private implementation for InitiateAuthResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a InitiateAuthResponsePrivate object with public implementation \a q.
 */
InitiateAuthResponsePrivate::InitiateAuthResponsePrivate(
    InitiateAuthResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider InitiateAuth response element from \a xml.
 */
void InitiateAuthResponsePrivate::parseInitiateAuthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitiateAuthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
