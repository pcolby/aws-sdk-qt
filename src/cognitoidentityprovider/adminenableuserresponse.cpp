// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminenableuserresponse.h"
#include "adminenableuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminEnableUserResponse
 * \brief The AdminEnableUserResponse class provides an interace for CognitoIdentityProvider AdminEnableUser responses.
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
 * \sa CognitoIdentityProviderClient::adminEnableUser
 */

/*!
 * Constructs a AdminEnableUserResponse object for \a reply to \a request, with parent \a parent.
 */
AdminEnableUserResponse::AdminEnableUserResponse(
        const AdminEnableUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminEnableUserResponsePrivate(this), parent)
{
    setRequest(new AdminEnableUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminEnableUserRequest * AdminEnableUserResponse::request() const
{
    Q_D(const AdminEnableUserResponse);
    return static_cast<const AdminEnableUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminEnableUser \a response.
 */
void AdminEnableUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminEnableUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminEnableUserResponsePrivate
 * \brief The AdminEnableUserResponsePrivate class provides private implementation for AdminEnableUserResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminEnableUserResponsePrivate object with public implementation \a q.
 */
AdminEnableUserResponsePrivate::AdminEnableUserResponsePrivate(
    AdminEnableUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminEnableUser response element from \a xml.
 */
void AdminEnableUserResponsePrivate::parseAdminEnableUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminEnableUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
