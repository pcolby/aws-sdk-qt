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

#include "deregisteridentityproviderresponse.h"
#include "deregisteridentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::DeregisterIdentityProviderResponse
 * \brief The DeregisterIdentityProviderResponse class provides an interace for LicenseManagerUserSubscriptions DeregisterIdentityProvider responses.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::deregisterIdentityProvider
 */

/*!
 * Constructs a DeregisterIdentityProviderResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterIdentityProviderResponse::DeregisterIdentityProviderResponse(
        const DeregisterIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerUserSubscriptionsResponse(new DeregisterIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new DeregisterIdentityProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterIdentityProviderRequest * DeregisterIdentityProviderResponse::request() const
{
    Q_D(const DeregisterIdentityProviderResponse);
    return static_cast<const DeregisterIdentityProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManagerUserSubscriptions DeregisterIdentityProvider \a response.
 */
void DeregisterIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterIdentityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::DeregisterIdentityProviderResponsePrivate
 * \brief The DeregisterIdentityProviderResponsePrivate class provides private implementation for DeregisterIdentityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a DeregisterIdentityProviderResponsePrivate object with public implementation \a q.
 */
DeregisterIdentityProviderResponsePrivate::DeregisterIdentityProviderResponsePrivate(
    DeregisterIdentityProviderResponse * const q) : LicenseManagerUserSubscriptionsResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManagerUserSubscriptions DeregisterIdentityProvider response element from \a xml.
 */
void DeregisterIdentityProviderResponsePrivate::parseDeregisterIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterIdentityProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
