/*
    Copyright 2013-2021 Paul Colby

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

#include "resendconfirmationcoderesponse.h"
#include "resendconfirmationcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ResendConfirmationCodeResponse
 * \brief The ResendConfirmationCodeResponse class provides an interace for CognitoIdentityProvider ResendConfirmationCode responses.
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
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::resendConfirmationCode
 */

/*!
 * Constructs a ResendConfirmationCodeResponse object for \a reply to \a request, with parent \a parent.
 */
ResendConfirmationCodeResponse::ResendConfirmationCodeResponse(
        const ResendConfirmationCodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ResendConfirmationCodeResponsePrivate(this), parent)
{
    setRequest(new ResendConfirmationCodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResendConfirmationCodeRequest * ResendConfirmationCodeResponse::request() const
{
    return static_cast<const ResendConfirmationCodeRequest *>(CognitoIdentityProviderResponse::request());
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ResendConfirmationCode \a response.
 */
void ResendConfirmationCodeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResendConfirmationCodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ResendConfirmationCodeResponsePrivate
 * \brief The ResendConfirmationCodeResponsePrivate class provides private implementation for ResendConfirmationCodeResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ResendConfirmationCodeResponsePrivate object with public implementation \a q.
 */
ResendConfirmationCodeResponsePrivate::ResendConfirmationCodeResponsePrivate(
    ResendConfirmationCodeResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ResendConfirmationCode response element from \a xml.
 */
void ResendConfirmationCodeResponsePrivate::parseResendConfirmationCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResendConfirmationCodeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
