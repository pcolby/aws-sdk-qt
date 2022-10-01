// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "licensemanagerusersubscriptionsresponse.h"
#include "licensemanagerusersubscriptionsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsResponse
 * \brief The LicenseManagerUserSubscriptionsResponse class provides an interface for LicenseManagerUserSubscriptions responses.
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a LicenseManagerUserSubscriptionsResponse object with parent \a parent.
 */
LicenseManagerUserSubscriptionsResponse::LicenseManagerUserSubscriptionsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LicenseManagerUserSubscriptionsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LicenseManagerUserSubscriptionsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LicenseManagerUserSubscriptionsResponsePrivate.
 */
LicenseManagerUserSubscriptionsResponse::LicenseManagerUserSubscriptionsResponse(LicenseManagerUserSubscriptionsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LicenseManagerUserSubscriptionsResponse::parseFailure(QIODevice &response)
{
    //Q_D(LicenseManagerUserSubscriptionsResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsResponsePrivate
 * \brief The LicenseManagerUserSubscriptionsResponsePrivate class provides private implementation for LicenseManagerUserSubscriptionsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManagerUserSubscriptions
 */

/*!
 * Constructs a LicenseManagerUserSubscriptionsResponsePrivate object with public implementation \a q.
 */
LicenseManagerUserSubscriptionsResponsePrivate::LicenseManagerUserSubscriptionsResponsePrivate(
    LicenseManagerUserSubscriptionsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws
