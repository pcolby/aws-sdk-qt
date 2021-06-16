/*
    Copyright 2013-2021 Paul Colby

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

#include "admingetdeviceresponse.h"
#include "admingetdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminGetDeviceResponse
 * \brief The AdminGetDeviceResponse class provides an interace for CognitoIdentityProvider AdminGetDevice responses.
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
 * \sa CognitoIdentityProviderClient::adminGetDevice
 */

/*!
 * Constructs a AdminGetDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
AdminGetDeviceResponse::AdminGetDeviceResponse(
        const AdminGetDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminGetDeviceResponsePrivate(this), parent)
{
    setRequest(new AdminGetDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminGetDeviceRequest * AdminGetDeviceResponse::request() const
{
    Q_D(const AdminGetDeviceResponse);
    return static_cast<const AdminGetDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminGetDevice \a response.
 */
void AdminGetDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminGetDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminGetDeviceResponsePrivate
 * \brief The AdminGetDeviceResponsePrivate class provides private implementation for AdminGetDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminGetDeviceResponsePrivate object with public implementation \a q.
 */
AdminGetDeviceResponsePrivate::AdminGetDeviceResponsePrivate(
    AdminGetDeviceResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminGetDevice response element from \a xml.
 */
void AdminGetDeviceResponsePrivate::parseAdminGetDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminGetDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
