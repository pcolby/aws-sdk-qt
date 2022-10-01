// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
