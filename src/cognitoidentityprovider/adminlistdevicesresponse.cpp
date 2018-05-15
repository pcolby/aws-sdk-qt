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

#include "adminlistdevicesresponse.h"
#include "adminlistdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminListDevicesResponse
 * \brief The AdminListDevicesResponse class provides an interace for CognitoIdentityProvider AdminListDevices responses.
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
 * \sa CognitoIdentityProviderClient::adminListDevices
 */

/*!
 * Constructs a AdminListDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
AdminListDevicesResponse::AdminListDevicesResponse(
        const AdminListDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminListDevicesResponsePrivate(this), parent)
{
    setRequest(new AdminListDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminListDevicesRequest * AdminListDevicesResponse::request() const
{
    Q_D(const AdminListDevicesResponse);
    return static_cast<const AdminListDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminListDevices \a response.
 */
void AdminListDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminListDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminListDevicesResponsePrivate
 * \brief The AdminListDevicesResponsePrivate class provides private implementation for AdminListDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminListDevicesResponsePrivate object with public implementation \a q.
 */
AdminListDevicesResponsePrivate::AdminListDevicesResponsePrivate(
    AdminListDevicesResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminListDevices response element from \a xml.
 */
void AdminListDevicesResponsePrivate::parseAdminListDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminListDevicesResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
