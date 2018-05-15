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

#include "adminforgetdeviceresponse.h"
#include "adminforgetdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminForgetDeviceResponse
 * \brief The AdminForgetDeviceResponse class provides an interace for CognitoIdentityProvider AdminForgetDevice responses.
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
 * \sa CognitoIdentityProviderClient::adminForgetDevice
 */

/*!
 * Constructs a AdminForgetDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
AdminForgetDeviceResponse::AdminForgetDeviceResponse(
        const AdminForgetDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminForgetDeviceResponsePrivate(this), parent)
{
    setRequest(new AdminForgetDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminForgetDeviceRequest * AdminForgetDeviceResponse::request() const
{
    Q_D(const AdminForgetDeviceResponse);
    return static_cast<const AdminForgetDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminForgetDevice \a response.
 */
void AdminForgetDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminForgetDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminForgetDeviceResponsePrivate
 * \brief The AdminForgetDeviceResponsePrivate class provides private implementation for AdminForgetDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminForgetDeviceResponsePrivate object with public implementation \a q.
 */
AdminForgetDeviceResponsePrivate::AdminForgetDeviceResponsePrivate(
    AdminForgetDeviceResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminForgetDevice response element from \a xml.
 */
void AdminForgetDeviceResponsePrivate::parseAdminForgetDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminForgetDeviceResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
