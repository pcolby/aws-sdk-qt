// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "savingsplansresponse.h"
#include "savingsplansresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SavingsPlans {

/*!
 * \class QtAws::SavingsPlans::SavingsPlansResponse
 * \brief The SavingsPlansResponse class provides an interface for SavingsPlans responses.
 *
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * Constructs a SavingsPlansResponse object with parent \a parent.
 */
SavingsPlansResponse::SavingsPlansResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SavingsPlansResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SavingsPlansResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SavingsPlansResponsePrivate.
 */
SavingsPlansResponse::SavingsPlansResponse(SavingsPlansResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SavingsPlansResponse::parseFailure(QIODevice &response)
{
    //Q_D(SavingsPlansResponse);
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
 * \class QtAws::SavingsPlans::SavingsPlansResponsePrivate
 * \brief The SavingsPlansResponsePrivate class provides private implementation for SavingsPlansResponse.
 * \internal
 *
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * Constructs a SavingsPlansResponsePrivate object with public implementation \a q.
 */
SavingsPlansResponsePrivate::SavingsPlansResponsePrivate(
    SavingsPlansResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SavingsPlans
} // namespace QtAws
