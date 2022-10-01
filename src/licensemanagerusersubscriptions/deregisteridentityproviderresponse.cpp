// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
