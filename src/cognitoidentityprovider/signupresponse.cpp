// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "signupresponse.h"
#include "signupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::SignUpResponse
 * \brief The SignUpResponse class provides an interace for CognitoIdentityProvider SignUp responses.
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
 * \sa CognitoIdentityProviderClient::signUp
 */

/*!
 * Constructs a SignUpResponse object for \a reply to \a request, with parent \a parent.
 */
SignUpResponse::SignUpResponse(
        const SignUpRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new SignUpResponsePrivate(this), parent)
{
    setRequest(new SignUpRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SignUpRequest * SignUpResponse::request() const
{
    Q_D(const SignUpResponse);
    return static_cast<const SignUpRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider SignUp \a response.
 */
void SignUpResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SignUpResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::SignUpResponsePrivate
 * \brief The SignUpResponsePrivate class provides private implementation for SignUpResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a SignUpResponsePrivate object with public implementation \a q.
 */
SignUpResponsePrivate::SignUpResponsePrivate(
    SignUpResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider SignUp response element from \a xml.
 */
void SignUpResponsePrivate::parseSignUpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SignUpResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
