// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminlinkproviderforuserresponse.h"
#include "adminlinkproviderforuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminLinkProviderForUserResponse
 * \brief The AdminLinkProviderForUserResponse class provides an interace for CognitoIdentityProvider AdminLinkProviderForUser responses.
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
 * \sa CognitoIdentityProviderClient::adminLinkProviderForUser
 */

/*!
 * Constructs a AdminLinkProviderForUserResponse object for \a reply to \a request, with parent \a parent.
 */
AdminLinkProviderForUserResponse::AdminLinkProviderForUserResponse(
        const AdminLinkProviderForUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminLinkProviderForUserResponsePrivate(this), parent)
{
    setRequest(new AdminLinkProviderForUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminLinkProviderForUserRequest * AdminLinkProviderForUserResponse::request() const
{
    Q_D(const AdminLinkProviderForUserResponse);
    return static_cast<const AdminLinkProviderForUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminLinkProviderForUser \a response.
 */
void AdminLinkProviderForUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminLinkProviderForUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminLinkProviderForUserResponsePrivate
 * \brief The AdminLinkProviderForUserResponsePrivate class provides private implementation for AdminLinkProviderForUserResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminLinkProviderForUserResponsePrivate object with public implementation \a q.
 */
AdminLinkProviderForUserResponsePrivate::AdminLinkProviderForUserResponsePrivate(
    AdminLinkProviderForUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminLinkProviderForUser response element from \a xml.
 */
void AdminLinkProviderForUserResponsePrivate::parseAdminLinkProviderForUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminLinkProviderForUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
