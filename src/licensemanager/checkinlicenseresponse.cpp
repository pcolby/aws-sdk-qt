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

#include "checkinlicenseresponse.h"
#include "checkinlicenseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CheckInLicenseResponse
 * \brief The CheckInLicenseResponse class provides an interace for LicenseManager CheckInLicense responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::checkInLicense
 */

/*!
 * Constructs a CheckInLicenseResponse object for \a reply to \a request, with parent \a parent.
 */
CheckInLicenseResponse::CheckInLicenseResponse(
        const CheckInLicenseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CheckInLicenseResponsePrivate(this), parent)
{
    setRequest(new CheckInLicenseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CheckInLicenseRequest * CheckInLicenseResponse::request() const
{
    Q_D(const CheckInLicenseResponse);
    return static_cast<const CheckInLicenseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager CheckInLicense \a response.
 */
void CheckInLicenseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CheckInLicenseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CheckInLicenseResponsePrivate
 * \brief The CheckInLicenseResponsePrivate class provides private implementation for CheckInLicenseResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CheckInLicenseResponsePrivate object with public implementation \a q.
 */
CheckInLicenseResponsePrivate::CheckInLicenseResponsePrivate(
    CheckInLicenseResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CheckInLicense response element from \a xml.
 */
void CheckInLicenseResponsePrivate::parseCheckInLicenseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CheckInLicenseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
