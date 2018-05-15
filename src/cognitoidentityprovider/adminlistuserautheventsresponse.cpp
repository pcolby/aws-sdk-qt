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

#include "adminlistuserautheventsresponse.h"
#include "adminlistuserautheventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminListUserAuthEventsResponse
 * \brief The AdminListUserAuthEventsResponse class provides an interace for CognitoIdentityProvider AdminListUserAuthEvents responses.
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
 * \sa CognitoIdentityProviderClient::adminListUserAuthEvents
 */

/*!
 * Constructs a AdminListUserAuthEventsResponse object for \a reply to \a request, with parent \a parent.
 */
AdminListUserAuthEventsResponse::AdminListUserAuthEventsResponse(
        const AdminListUserAuthEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminListUserAuthEventsResponsePrivate(this), parent)
{
    setRequest(new AdminListUserAuthEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminListUserAuthEventsRequest * AdminListUserAuthEventsResponse::request() const
{
    Q_D(const AdminListUserAuthEventsResponse);
    return static_cast<const AdminListUserAuthEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminListUserAuthEvents \a response.
 */
void AdminListUserAuthEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminListUserAuthEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminListUserAuthEventsResponsePrivate
 * \brief The AdminListUserAuthEventsResponsePrivate class provides private implementation for AdminListUserAuthEventsResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminListUserAuthEventsResponsePrivate object with public implementation \a q.
 */
AdminListUserAuthEventsResponsePrivate::AdminListUserAuthEventsResponsePrivate(
    AdminListUserAuthEventsResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminListUserAuthEvents response element from \a xml.
 */
void AdminListUserAuthEventsResponsePrivate::parseAdminListUserAuthEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminListUserAuthEventsResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
