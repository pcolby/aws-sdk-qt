// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "changepasswordresponse.h"
#include "changepasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ChangePasswordResponse
 * \brief The ChangePasswordResponse class provides an interace for CognitoIdentityProvider ChangePassword responses.
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
 * \sa CognitoIdentityProviderClient::changePassword
 */

/*!
 * Constructs a ChangePasswordResponse object for \a reply to \a request, with parent \a parent.
 */
ChangePasswordResponse::ChangePasswordResponse(
        const ChangePasswordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ChangePasswordResponsePrivate(this), parent)
{
    setRequest(new ChangePasswordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ChangePasswordRequest * ChangePasswordResponse::request() const
{
    Q_D(const ChangePasswordResponse);
    return static_cast<const ChangePasswordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ChangePassword \a response.
 */
void ChangePasswordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ChangePasswordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ChangePasswordResponsePrivate
 * \brief The ChangePasswordResponsePrivate class provides private implementation for ChangePasswordResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ChangePasswordResponsePrivate object with public implementation \a q.
 */
ChangePasswordResponsePrivate::ChangePasswordResponsePrivate(
    ChangePasswordResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ChangePassword response element from \a xml.
 */
void ChangePasswordResponsePrivate::parseChangePasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChangePasswordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
