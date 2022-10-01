// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "revoketokenresponse.h"
#include "revoketokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::RevokeTokenResponse
 * \brief The RevokeTokenResponse class provides an interace for CognitoIdentityProvider RevokeToken responses.
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
 * \sa CognitoIdentityProviderClient::revokeToken
 */

/*!
 * Constructs a RevokeTokenResponse object for \a reply to \a request, with parent \a parent.
 */
RevokeTokenResponse::RevokeTokenResponse(
        const RevokeTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new RevokeTokenResponsePrivate(this), parent)
{
    setRequest(new RevokeTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RevokeTokenRequest * RevokeTokenResponse::request() const
{
    Q_D(const RevokeTokenResponse);
    return static_cast<const RevokeTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider RevokeToken \a response.
 */
void RevokeTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RevokeTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::RevokeTokenResponsePrivate
 * \brief The RevokeTokenResponsePrivate class provides private implementation for RevokeTokenResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a RevokeTokenResponsePrivate object with public implementation \a q.
 */
RevokeTokenResponsePrivate::RevokeTokenResponsePrivate(
    RevokeTokenResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider RevokeToken response element from \a xml.
 */
void RevokeTokenResponsePrivate::parseRevokeTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
