// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "forgotpasswordresponse.h"
#include "forgotpasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ForgotPasswordResponse
 * \brief The ForgotPasswordResponse class provides an interace for CognitoIdentityProvider ForgotPassword responses.
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
 * \sa CognitoIdentityProviderClient::forgotPassword
 */

/*!
 * Constructs a ForgotPasswordResponse object for \a reply to \a request, with parent \a parent.
 */
ForgotPasswordResponse::ForgotPasswordResponse(
        const ForgotPasswordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ForgotPasswordResponsePrivate(this), parent)
{
    setRequest(new ForgotPasswordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ForgotPasswordRequest * ForgotPasswordResponse::request() const
{
    Q_D(const ForgotPasswordResponse);
    return static_cast<const ForgotPasswordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ForgotPassword \a response.
 */
void ForgotPasswordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ForgotPasswordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ForgotPasswordResponsePrivate
 * \brief The ForgotPasswordResponsePrivate class provides private implementation for ForgotPasswordResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ForgotPasswordResponsePrivate object with public implementation \a q.
 */
ForgotPasswordResponsePrivate::ForgotPasswordResponsePrivate(
    ForgotPasswordResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ForgotPassword response element from \a xml.
 */
void ForgotPasswordResponsePrivate::parseForgotPasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ForgotPasswordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
