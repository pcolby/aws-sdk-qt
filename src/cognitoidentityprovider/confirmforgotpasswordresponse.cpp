// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "confirmforgotpasswordresponse.h"
#include "confirmforgotpasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmForgotPasswordResponse
 * \brief The ConfirmForgotPasswordResponse class provides an interace for CognitoIdentityProvider ConfirmForgotPassword responses.
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
 * \sa CognitoIdentityProviderClient::confirmForgotPassword
 */

/*!
 * Constructs a ConfirmForgotPasswordResponse object for \a reply to \a request, with parent \a parent.
 */
ConfirmForgotPasswordResponse::ConfirmForgotPasswordResponse(
        const ConfirmForgotPasswordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ConfirmForgotPasswordResponsePrivate(this), parent)
{
    setRequest(new ConfirmForgotPasswordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ConfirmForgotPasswordRequest * ConfirmForgotPasswordResponse::request() const
{
    Q_D(const ConfirmForgotPasswordResponse);
    return static_cast<const ConfirmForgotPasswordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ConfirmForgotPassword \a response.
 */
void ConfirmForgotPasswordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ConfirmForgotPasswordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmForgotPasswordResponsePrivate
 * \brief The ConfirmForgotPasswordResponsePrivate class provides private implementation for ConfirmForgotPasswordResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ConfirmForgotPasswordResponsePrivate object with public implementation \a q.
 */
ConfirmForgotPasswordResponsePrivate::ConfirmForgotPasswordResponsePrivate(
    ConfirmForgotPasswordResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ConfirmForgotPassword response element from \a xml.
 */
void ConfirmForgotPasswordResponsePrivate::parseConfirmForgotPasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmForgotPasswordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
