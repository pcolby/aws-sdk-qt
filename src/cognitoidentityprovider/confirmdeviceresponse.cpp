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

#include "confirmdeviceresponse.h"
#include "confirmdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmDeviceResponse
 * \brief The ConfirmDeviceResponse class provides an interace for CognitoIdentityProvider ConfirmDevice responses.
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
 * \sa CognitoIdentityProviderClient::confirmDevice
 */

/*!
 * Constructs a ConfirmDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
ConfirmDeviceResponse::ConfirmDeviceResponse(
        const ConfirmDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ConfirmDeviceResponsePrivate(this), parent)
{
    setRequest(new ConfirmDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ConfirmDeviceRequest * ConfirmDeviceResponse::request() const
{
    Q_D(const ConfirmDeviceResponse);
    return static_cast<const ConfirmDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ConfirmDevice \a response.
 */
void ConfirmDeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(ConfirmDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmDeviceResponsePrivate
 * \brief The ConfirmDeviceResponsePrivate class provides private implementation for ConfirmDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ConfirmDeviceResponsePrivate object with public implementation \a q.
 */
ConfirmDeviceResponsePrivate::ConfirmDeviceResponsePrivate(
    ConfirmDeviceResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ConfirmDevice response element from \a xml.
 */
void ConfirmDeviceResponsePrivate::parseConfirmDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmDeviceResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
