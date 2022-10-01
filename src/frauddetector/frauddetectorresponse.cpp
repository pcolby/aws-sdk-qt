// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "frauddetectorresponse.h"
#include "frauddetectorresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::FraudDetectorResponse
 * \brief The FraudDetectorResponse class provides an interface for FraudDetector responses.
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a FraudDetectorResponse object with parent \a parent.
 */
FraudDetectorResponse::FraudDetectorResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new FraudDetectorResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a FraudDetectorResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FraudDetectorResponsePrivate.
 */
FraudDetectorResponse::FraudDetectorResponse(FraudDetectorResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void FraudDetectorResponse::parseFailure(QIODevice &response)
{
    //Q_D(FraudDetectorResponse);
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
 * \class QtAws::FraudDetector::FraudDetectorResponsePrivate
 * \brief The FraudDetectorResponsePrivate class provides private implementation for FraudDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a FraudDetectorResponsePrivate object with public implementation \a q.
 */
FraudDetectorResponsePrivate::FraudDetectorResponsePrivate(
    FraudDetectorResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace FraudDetector
} // namespace QtAws
