// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminuserglobalsignoutresponse.h"
#include "adminuserglobalsignoutresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUserGlobalSignOutResponse
 * \brief The AdminUserGlobalSignOutResponse class provides an interace for CognitoIdentityProvider AdminUserGlobalSignOut responses.
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
 * \sa CognitoIdentityProviderClient::adminUserGlobalSignOut
 */

/*!
 * Constructs a AdminUserGlobalSignOutResponse object for \a reply to \a request, with parent \a parent.
 */
AdminUserGlobalSignOutResponse::AdminUserGlobalSignOutResponse(
        const AdminUserGlobalSignOutRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminUserGlobalSignOutResponsePrivate(this), parent)
{
    setRequest(new AdminUserGlobalSignOutRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminUserGlobalSignOutRequest * AdminUserGlobalSignOutResponse::request() const
{
    Q_D(const AdminUserGlobalSignOutResponse);
    return static_cast<const AdminUserGlobalSignOutRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminUserGlobalSignOut \a response.
 */
void AdminUserGlobalSignOutResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminUserGlobalSignOutResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUserGlobalSignOutResponsePrivate
 * \brief The AdminUserGlobalSignOutResponsePrivate class provides private implementation for AdminUserGlobalSignOutResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminUserGlobalSignOutResponsePrivate object with public implementation \a q.
 */
AdminUserGlobalSignOutResponsePrivate::AdminUserGlobalSignOutResponsePrivate(
    AdminUserGlobalSignOutResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminUserGlobalSignOut response element from \a xml.
 */
void AdminUserGlobalSignOutResponsePrivate::parseAdminUserGlobalSignOutResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminUserGlobalSignOutResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
