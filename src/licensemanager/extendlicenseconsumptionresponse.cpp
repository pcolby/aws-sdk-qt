// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
