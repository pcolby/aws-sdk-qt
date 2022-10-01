// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "admindisableproviderforuserresponse.h"
#include "admindisableproviderforuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDisableProviderForUserResponse
 * \brief The AdminDisableProviderForUserResponse class provides an interace for CognitoIdentityProvider AdminDisableProviderForUser responses.
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
 * \sa CognitoIdentityProviderClient::adminDisableProviderForUser
 */

/*!
 * Constructs a AdminDisableProviderForUserResponse object for \a reply to \a request, with parent \a parent.
 */
AdminDisableProviderForUserResponse::AdminDisableProviderForUserResponse(
        const AdminDisableProviderForUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminDisableProviderForUserResponsePrivate(this), parent)
{
    setRequest(new AdminDisableProviderForUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminDisableProviderForUserRequest * AdminDisableProviderForUserResponse::request() const
{
    Q_D(const AdminDisableProviderForUserResponse);
    return static_cast<const AdminDisableProviderForUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminDisableProviderForUser \a response.
 */
void AdminDisableProviderForUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminDisableProviderForUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDisableProviderForUserResponsePrivate
 * \brief The AdminDisableProviderForUserResponsePrivate class provides private implementation for AdminDisableProviderForUserResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminDisableProviderForUserResponsePrivate object with public implementation \a q.
 */
AdminDisableProviderForUserResponsePrivate::AdminDisableProviderForUserResponsePrivate(
    AdminDisableProviderForUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminDisableProviderForUser response element from \a xml.
 */
void AdminDisableProviderForUserResponsePrivate::parseAdminDisableProviderForUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminDisableProviderForUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
