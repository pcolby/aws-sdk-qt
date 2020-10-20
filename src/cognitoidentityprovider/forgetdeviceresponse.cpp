/*
    Copyright 2013-2020 Paul Colby

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

#include "forgetdeviceresponse.h"
#include "forgetdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ForgetDeviceResponse
 * \brief The ForgetDeviceResponse class provides an interace for CognitoIdentityProvider ForgetDevice responses.
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
 * \sa CognitoIdentityProviderClient::forgetDevice
 */

/*!
 * Constructs a ForgetDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
ForgetDeviceResponse::ForgetDeviceResponse(
        const ForgetDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ForgetDeviceResponsePrivate(this), parent)
{
    setRequest(new ForgetDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ForgetDeviceRequest * ForgetDeviceResponse::request() const
{
    Q_D(const ForgetDeviceResponse);
    return static_cast<const ForgetDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ForgetDevice \a response.
 */
void ForgetDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ForgetDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ForgetDeviceResponsePrivate
 * \brief The ForgetDeviceResponsePrivate class provides private implementation for ForgetDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ForgetDeviceResponsePrivate object with public implementation \a q.
 */
ForgetDeviceResponsePrivate::ForgetDeviceResponsePrivate(
    ForgetDeviceResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ForgetDevice response element from \a xml.
 */
void ForgetDeviceResponsePrivate::parseForgetDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ForgetDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
