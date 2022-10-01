// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "admincreateuserresponse.h"
#include "admincreateuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminCreateUserResponse
 * \brief The AdminCreateUserResponse class provides an interace for CognitoIdentityProvider AdminCreateUser responses.
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
 * \sa CognitoIdentityProviderClient::adminCreateUser
 */

/*!
 * Constructs a AdminCreateUserResponse object for \a reply to \a request, with parent \a parent.
 */
AdminCreateUserResponse::AdminCreateUserResponse(
        const AdminCreateUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminCreateUserResponsePrivate(this), parent)
{
    setRequest(new AdminCreateUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminCreateUserRequest * AdminCreateUserResponse::request() const
{
    Q_D(const AdminCreateUserResponse);
    return static_cast<const AdminCreateUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminCreateUser \a response.
 */
void AdminCreateUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminCreateUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminCreateUserResponsePrivate
 * \brief The AdminCreateUserResponsePrivate class provides private implementation for AdminCreateUserResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminCreateUserResponsePrivate object with public implementation \a q.
 */
AdminCreateUserResponsePrivate::AdminCreateUserResponsePrivate(
    AdminCreateUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminCreateUser response element from \a xml.
 */
void AdminCreateUserResponsePrivate::parseAdminCreateUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminCreateUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
