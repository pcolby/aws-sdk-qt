// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuserresponse.h"
#include "getuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetUserResponse
 * \brief The GetUserResponse class provides an interace for CognitoIdentityProvider GetUser responses.
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
 * \sa CognitoIdentityProviderClient::getUser
 */

/*!
 * Constructs a GetUserResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserResponse::GetUserResponse(
        const GetUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetUserResponsePrivate(this), parent)
{
    setRequest(new GetUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserRequest * GetUserResponse::request() const
{
    Q_D(const GetUserResponse);
    return static_cast<const GetUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider GetUser \a response.
 */
void GetUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetUserResponsePrivate
 * \brief The GetUserResponsePrivate class provides private implementation for GetUserResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetUserResponsePrivate object with public implementation \a q.
 */
GetUserResponsePrivate::GetUserResponsePrivate(
    GetUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider GetUser response element from \a xml.
 */
void GetUserResponsePrivate::parseGetUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
