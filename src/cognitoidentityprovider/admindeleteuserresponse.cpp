// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "admindeleteuserresponse.h"
#include "admindeleteuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDeleteUserResponse
 * \brief The AdminDeleteUserResponse class provides an interace for CognitoIdentityProvider AdminDeleteUser responses.
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
 * \sa CognitoIdentityProviderClient::adminDeleteUser
 */

/*!
 * Constructs a AdminDeleteUserResponse object for \a reply to \a request, with parent \a parent.
 */
AdminDeleteUserResponse::AdminDeleteUserResponse(
        const AdminDeleteUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminDeleteUserResponsePrivate(this), parent)
{
    setRequest(new AdminDeleteUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminDeleteUserRequest * AdminDeleteUserResponse::request() const
{
    Q_D(const AdminDeleteUserResponse);
    return static_cast<const AdminDeleteUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminDeleteUser \a response.
 */
void AdminDeleteUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminDeleteUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDeleteUserResponsePrivate
 * \brief The AdminDeleteUserResponsePrivate class provides private implementation for AdminDeleteUserResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminDeleteUserResponsePrivate object with public implementation \a q.
 */
AdminDeleteUserResponsePrivate::AdminDeleteUserResponsePrivate(
    AdminDeleteUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminDeleteUser response element from \a xml.
 */
void AdminDeleteUserResponsePrivate::parseAdminDeleteUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminDeleteUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
