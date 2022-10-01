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

#include "extendlicenseconsumptionresponse.h"
#include "extendlicenseconsumptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ExtendLicenseConsumptionResponse
 * \brief The ExtendLicenseConsumptionResponse class provides an interace for LicenseManager ExtendLicenseConsumption responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::extendLicenseConsumption
 */

/*!
 * Constructs a ExtendLicenseConsumptionResponse object for \a reply to \a request, with parent \a parent.
 */
ExtendLicenseConsumptionResponse::ExtendLicenseConsumptionResponse(
        const ExtendLicenseConsumptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ExtendLicenseConsumptionResponsePrivate(this), parent)
{
    setRequest(new ExtendLicenseConsumptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExtendLicenseConsumptionRequest * ExtendLicenseConsumptionResponse::request() const
{
    Q_D(const ExtendLicenseConsumptionResponse);
    return static_cast<const ExtendLicenseConsumptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ExtendLicenseConsumption \a response.
 */
void ExtendLicenseConsumptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExtendLicenseConsumptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ExtendLicenseConsumptionResponsePrivate
 * \brief The ExtendLicenseConsumptionResponsePrivate class provides private implementation for ExtendLicenseConsumptionResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ExtendLicenseConsumptionResponsePrivate object with public implementation \a q.
 */
ExtendLicenseConsumptionResponsePrivate::ExtendLicenseConsumptionResponsePrivate(
    ExtendLicenseConsumptionResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ExtendLicenseConsumption response element from \a xml.
 */
void ExtendLicenseConsumptionResponsePrivate::parseExtendLicenseConsumptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExtendLicenseConsumptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
