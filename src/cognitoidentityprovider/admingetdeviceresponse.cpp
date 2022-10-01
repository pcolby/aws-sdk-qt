// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
