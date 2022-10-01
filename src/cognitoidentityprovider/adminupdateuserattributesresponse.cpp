// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminupdateuserattributesresponse.h"
#include "adminupdateuserattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUpdateUserAttributesResponse
 * \brief The AdminUpdateUserAttributesResponse class provides an interace for CognitoIdentityProvider AdminUpdateUserAttributes responses.
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
 * \sa CognitoIdentityProviderClient::adminUpdateUserAttributes
 */

/*!
 * Constructs a AdminUpdateUserAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
AdminUpdateUserAttributesResponse::AdminUpdateUserAttributesResponse(
        const AdminUpdateUserAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminUpdateUserAttributesResponsePrivate(this), parent)
{
    setRequest(new AdminUpdateUserAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminUpdateUserAttributesRequest * AdminUpdateUserAttributesResponse::request() const
{
    Q_D(const AdminUpdateUserAttributesResponse);
    return static_cast<const AdminUpdateUserAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminUpdateUserAttributes \a response.
 */
void AdminUpdateUserAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminUpdateUserAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUpdateUserAttributesResponsePrivate
 * \brief The AdminUpdateUserAttributesResponsePrivate class provides private implementation for AdminUpdateUserAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminUpdateUserAttributesResponsePrivate object with public implementation \a q.
 */
AdminUpdateUserAttributesResponsePrivate::AdminUpdateUserAttributesResponsePrivate(
    AdminUpdateUserAttributesResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminUpdateUserAttributes response element from \a xml.
 */
void AdminUpdateUserAttributesResponsePrivate::parseAdminUpdateUserAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminUpdateUserAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
