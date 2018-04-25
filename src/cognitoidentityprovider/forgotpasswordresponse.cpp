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
    Q_D(ForgotPasswordResponse);
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
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
