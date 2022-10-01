// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
