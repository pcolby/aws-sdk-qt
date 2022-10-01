// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "checkoutborrowlicenseresponse.h"
#include "checkoutborrowlicenseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CheckoutBorrowLicenseResponse
 * \brief The CheckoutBorrowLicenseResponse class provides an interace for LicenseManager CheckoutBorrowLicense responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::checkoutBorrowLicense
 */

/*!
 * Constructs a CheckoutBorrowLicenseResponse object for \a reply to \a request, with parent \a parent.
 */
CheckoutBorrowLicenseResponse::CheckoutBorrowLicenseResponse(
        const CheckoutBorrowLicenseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CheckoutBorrowLicenseResponsePrivate(this), parent)
{
    setRequest(new CheckoutBorrowLicenseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CheckoutBorrowLicenseRequest * CheckoutBorrowLicenseResponse::request() const
{
    Q_D(const CheckoutBorrowLicenseResponse);
    return static_cast<const CheckoutBorrowLicenseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager CheckoutBorrowLicense \a response.
 */
void CheckoutBorrowLicenseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CheckoutBorrowLicenseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CheckoutBorrowLicenseResponsePrivate
 * \brief The CheckoutBorrowLicenseResponsePrivate class provides private implementation for CheckoutBorrowLicenseResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CheckoutBorrowLicenseResponsePrivate object with public implementation \a q.
 */
CheckoutBorrowLicenseResponsePrivate::CheckoutBorrowLicenseResponsePrivate(
    CheckoutBorrowLicenseResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CheckoutBorrowLicense response element from \a xml.
 */
void CheckoutBorrowLicenseResponsePrivate::parseCheckoutBorrowLicenseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CheckoutBorrowLicenseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
