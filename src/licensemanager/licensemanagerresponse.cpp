// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "licensemanagerresponse.h"
#include "licensemanagerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::LicenseManagerResponse
 * \brief The LicenseManagerResponse class provides an interface for LicenseManager responses.
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a LicenseManagerResponse object with parent \a parent.
 */
LicenseManagerResponse::LicenseManagerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LicenseManagerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LicenseManagerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LicenseManagerResponsePrivate.
 */
LicenseManagerResponse::LicenseManagerResponse(LicenseManagerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LicenseManagerResponse::parseFailure(QIODevice &response)
{
    //Q_D(LicenseManagerResponse);
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
 * \class QtAws::LicenseManager::LicenseManagerResponsePrivate
 * \brief The LicenseManagerResponsePrivate class provides private implementation for LicenseManagerResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a LicenseManagerResponsePrivate object with public implementation \a q.
 */
LicenseManagerResponsePrivate::LicenseManagerResponsePrivate(
    LicenseManagerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace LicenseManager
} // namespace QtAws
