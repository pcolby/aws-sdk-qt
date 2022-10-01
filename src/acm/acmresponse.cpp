// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acmresponse.h"
#include "acmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::AcmResponse
 * \brief The AcmResponse class provides an interface for Acm responses.
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a AcmResponse object with parent \a parent.
 */
AcmResponse::AcmResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AcmResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AcmResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AcmResponsePrivate.
 */
AcmResponse::AcmResponse(AcmResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AcmResponse::parseFailure(QIODevice &response)
{
    //Q_D(AcmResponse);
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
 * \class QtAws::Acm::AcmResponsePrivate
 * \brief The AcmResponsePrivate class provides private implementation for AcmResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a AcmResponsePrivate object with public implementation \a q.
 */
AcmResponsePrivate::AcmResponsePrivate(
    AcmResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Acm
} // namespace QtAws
