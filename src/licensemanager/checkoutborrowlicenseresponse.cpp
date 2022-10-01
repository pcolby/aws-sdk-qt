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
