// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuserattributeverificationcoderesponse.h"
#include "getuserattributeverificationcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetUserAttributeVerificationCodeResponse
 * \brief The GetUserAttributeVerificationCodeResponse class provides an interace for CognitoIdentityProvider GetUserAttributeVerificationCode responses.
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
 * \sa CognitoIdentityProviderClient::getUserAttributeVerificationCode
 */

/*!
 * Constructs a GetUserAttributeVerificationCodeResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserAttributeVerificationCodeResponse::GetUserAttributeVerificationCodeResponse(
        const GetUserAttributeVerificationCodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetUserAttributeVerificationCodeResponsePrivate(this), parent)
{
    setRequest(new GetUserAttributeVerificationCodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserAttributeVerificationCodeRequest * GetUserAttributeVerificationCodeResponse::request() const
{
    Q_D(const GetUserAttributeVerificationCodeResponse);
    return static_cast<const GetUserAttributeVerificationCodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider GetUserAttributeVerificationCode \a response.
 */
void GetUserAttributeVerificationCodeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUserAttributeVerificationCodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetUserAttributeVerificationCodeResponsePrivate
 * \brief The GetUserAttributeVerificationCodeResponsePrivate class provides private implementation for GetUserAttributeVerificationCodeResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetUserAttributeVerificationCodeResponsePrivate object with public implementation \a q.
 */
GetUserAttributeVerificationCodeResponsePrivate::GetUserAttributeVerificationCodeResponsePrivate(
    GetUserAttributeVerificationCodeResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider GetUserAttributeVerificationCode response element from \a xml.
 */
void GetUserAttributeVerificationCodeResponsePrivate::parseGetUserAttributeVerificationCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserAttributeVerificationCodeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
