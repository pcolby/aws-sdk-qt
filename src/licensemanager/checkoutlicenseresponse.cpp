// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "checkoutlicenseresponse.h"
#include "checkoutlicenseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CheckoutLicenseResponse
 * \brief The CheckoutLicenseResponse class provides an interace for LicenseManager CheckoutLicense responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::checkoutLicense
 */

/*!
 * Constructs a CheckoutLicenseResponse object for \a reply to \a request, with parent \a parent.
 */
CheckoutLicenseResponse::CheckoutLicenseResponse(
        const CheckoutLicenseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CheckoutLicenseResponsePrivate(this), parent)
{
    setRequest(new CheckoutLicenseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CheckoutLicenseRequest * CheckoutLicenseResponse::request() const
{
    Q_D(const CheckoutLicenseResponse);
    return static_cast<const CheckoutLicenseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager CheckoutLicense \a response.
 */
void CheckoutLicenseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CheckoutLicenseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CheckoutLicenseResponsePrivate
 * \brief The CheckoutLicenseResponsePrivate class provides private implementation for CheckoutLicenseResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CheckoutLicenseResponsePrivate object with public implementation \a q.
 */
CheckoutLicenseResponsePrivate::CheckoutLicenseResponsePrivate(
    CheckoutLicenseResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CheckoutLicense response element from \a xml.
 */
void CheckoutLicenseResponsePrivate::parseCheckoutLicenseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CheckoutLicenseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
