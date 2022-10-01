// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
