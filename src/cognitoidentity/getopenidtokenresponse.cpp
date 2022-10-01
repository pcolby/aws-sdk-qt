// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getopenidtokenresponse.h"
#include "getopenidtokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::GetOpenIdTokenResponse
 * \brief The GetOpenIdTokenResponse class provides an interace for CognitoIdentity GetOpenIdToken responses.
 *
 * \inmodule QtAwsCognitoIdentity
 *
 *  <fullname>Amazon Cognito Federated Identities</fullname>
 * 
 *  Amazon Cognito Federated Identities is a web service that delivers scoped temporary credentials to mobile devices and
 *  other untrusted environments. It uniquely identifies a device and supplies the user with a consistent identity over the
 *  lifetime of an
 * 
 *  application>
 * 
 *  Using Amazon Cognito Federated Identities, you can enable authentication with one or more third-party identity providers
 *  (Facebook, Google, or Login with Amazon) or an Amazon Cognito user pool, and you can also choose to support
 *  unauthenticated access from your app. Cognito delivers a unique identifier for each user and acts as an OpenID token
 *  provider trusted by AWS Security Token Service (STS) to access temporary, limited-privilege AWS
 * 
 *  credentials>
 * 
 *  For a description of the authentication flow from the Amazon Cognito Developer Guide see <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flow.html">Authentication
 * 
 *  Flow</a>>
 * 
 *  For more information see <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-identity.html">Amazon Cognito Federated
 *
 * \sa CognitoIdentityClient::getOpenIdToken
 */

/*!
 * Constructs a GetOpenIdTokenResponse object for \a reply to \a request, with parent \a parent.
 */
GetOpenIdTokenResponse::GetOpenIdTokenResponse(
        const GetOpenIdTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new GetOpenIdTokenResponsePrivate(this), parent)
{
    setRequest(new GetOpenIdTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOpenIdTokenRequest * GetOpenIdTokenResponse::request() const
{
    Q_D(const GetOpenIdTokenResponse);
    return static_cast<const GetOpenIdTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentity GetOpenIdToken \a response.
 */
void GetOpenIdTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOpenIdTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentity::GetOpenIdTokenResponsePrivate
 * \brief The GetOpenIdTokenResponsePrivate class provides private implementation for GetOpenIdTokenResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a GetOpenIdTokenResponsePrivate object with public implementation \a q.
 */
GetOpenIdTokenResponsePrivate::GetOpenIdTokenResponsePrivate(
    GetOpenIdTokenResponse * const q) : CognitoIdentityResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentity GetOpenIdToken response element from \a xml.
 */
void GetOpenIdTokenResponsePrivate::parseGetOpenIdTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOpenIdTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
