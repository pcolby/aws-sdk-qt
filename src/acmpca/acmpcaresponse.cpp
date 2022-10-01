// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acmpcaresponse.h"
#include "acmpcaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AcmPca {

/*!
 * \class QtAws::AcmPca::AcmPcaResponse
 * \brief The AcmPcaResponse class provides an interface for AcmPca responses.
 *
 * \inmodule QtAwsAcmPca
 */

/*!
 * Constructs a AcmPcaResponse object with parent \a parent.
 */
AcmPcaResponse::AcmPcaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AcmPcaResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AcmPcaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AcmPcaResponsePrivate.
 */
AcmPcaResponse::AcmPcaResponse(AcmPcaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AcmPcaResponse::parseFailure(QIODevice &response)
{
    //Q_D(AcmPcaResponse);
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
 * \class QtAws::AcmPca::AcmPcaResponsePrivate
 * \brief The AcmPcaResponsePrivate class provides private implementation for AcmPcaResponse.
 * \internal
 *
 * \inmodule QtAwsAcmPca
 */

/*!
 * Constructs a AcmPcaResponsePrivate object with public implementation \a q.
 */
AcmPcaResponsePrivate::AcmPcaResponsePrivate(
    AcmPcaResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AcmPca
} // namespace QtAws
