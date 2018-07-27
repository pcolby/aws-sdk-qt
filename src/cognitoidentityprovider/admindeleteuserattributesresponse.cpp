/*
    Copyright 2013-2018 Paul Colby

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

#include "admindeleteuserattributesresponse.h"
#include "admindeleteuserattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDeleteUserAttributesResponse
 * \brief The AdminDeleteUserAttributesResponse class provides an interace for CognitoIdentityProvider AdminDeleteUserAttributes responses.
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
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::adminDeleteUserAttributes
 */

/*!
 * Constructs a AdminDeleteUserAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
AdminDeleteUserAttributesResponse::AdminDeleteUserAttributesResponse(
        const AdminDeleteUserAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminDeleteUserAttributesResponsePrivate(this), parent)
{
    setRequest(new AdminDeleteUserAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminDeleteUserAttributesRequest * AdminDeleteUserAttributesResponse::request() const
{
    Q_D(const AdminDeleteUserAttributesResponse);
    return static_cast<const AdminDeleteUserAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminDeleteUserAttributes \a response.
 */
void AdminDeleteUserAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminDeleteUserAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDeleteUserAttributesResponsePrivate
 * \brief The AdminDeleteUserAttributesResponsePrivate class provides private implementation for AdminDeleteUserAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminDeleteUserAttributesResponsePrivate object with public implementation \a q.
 */
AdminDeleteUserAttributesResponsePrivate::AdminDeleteUserAttributesResponsePrivate(
    AdminDeleteUserAttributesResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminDeleteUserAttributes response element from \a xml.
 */
void AdminDeleteUserAttributesResponsePrivate::parseAdminDeleteUserAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminDeleteUserAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
