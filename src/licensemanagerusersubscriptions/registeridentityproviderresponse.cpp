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

#include "registeridentityproviderresponse.h"
#include "registeridentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::RegisterIdentityProviderResponse
 * \brief The RegisterIdentityProviderResponse class provides an interace for LicenseManagerUserSubscriptions RegisterIdentityProvider responses.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 *
 *  With License Manager, you can create user-based subscriptions to utilize licensed software with a per user subscription
 *  fee on Amazon EC2
 *
 * \sa LicenseManagerUserSubscriptionsClient::registerIdentityProvider
 */

/*!
 * Constructs a RegisterIdentityProviderResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterIdentityProviderResponse::RegisterIdentityProviderResponse(
        const RegisterIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerUserSubscriptionsResponse(new RegisterIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new RegisterIdentityProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterIdentityProviderRequest * RegisterIdentityProviderResponse::request() const
{
    Q_D(const RegisterIdentityProviderResponse);
    return static_cast<const RegisterIdentityProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManagerUserSubscriptions RegisterIdentityProvider \a response.
 */
void RegisterIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterIdentityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::RegisterIdentityProviderResponsePrivate
 * \brief The RegisterIdentityProviderResponsePrivate class provides private implementation for RegisterIdentityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a RegisterIdentityProviderResponsePrivate object with public implementation \a q.
 */
RegisterIdentityProviderResponsePrivate::RegisterIdentityProviderResponsePrivate(
    RegisterIdentityProviderResponse * const q) : LicenseManagerUserSubscriptionsResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManagerUserSubscriptions RegisterIdentityProvider response element from \a xml.
 */
void RegisterIdentityProviderResponsePrivate::parseRegisterIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterIdentityProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
