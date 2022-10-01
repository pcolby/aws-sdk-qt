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
