// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
