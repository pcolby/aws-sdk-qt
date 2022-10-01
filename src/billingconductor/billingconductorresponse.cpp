// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "billingconductorresponse.h"
#include "billingconductorresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace BillingConductor {

/*!
 * \class QtAws::BillingConductor::BillingConductorResponse
 * \brief The BillingConductorResponse class provides an interface for BillingConductor responses.
 *
 * \inmodule QtAwsBillingConductor
 */

/*!
 * Constructs a BillingConductorResponse object with parent \a parent.
 */
BillingConductorResponse::BillingConductorResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new BillingConductorResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a BillingConductorResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BillingConductorResponsePrivate.
 */
BillingConductorResponse::BillingConductorResponse(BillingConductorResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void BillingConductorResponse::parseFailure(QIODevice &response)
{
    //Q_D(BillingConductorResponse);
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
 * \class QtAws::BillingConductor::BillingConductorResponsePrivate
 * \brief The BillingConductorResponsePrivate class provides private implementation for BillingConductorResponse.
 * \internal
 *
 * \inmodule QtAwsBillingConductor
 */

/*!
 * Constructs a BillingConductorResponsePrivate object with public implementation \a q.
 */
BillingConductorResponsePrivate::BillingConductorResponsePrivate(
    BillingConductorResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace BillingConductor
} // namespace QtAws
