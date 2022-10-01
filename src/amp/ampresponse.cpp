// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ampresponse.h"
#include "ampresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::AmpResponse
 * \brief The AmpResponse class provides an interface for Amp responses.
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a AmpResponse object with parent \a parent.
 */
AmpResponse::AmpResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AmpResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AmpResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AmpResponsePrivate.
 */
AmpResponse::AmpResponse(AmpResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AmpResponse::parseFailure(QIODevice &response)
{
    //Q_D(AmpResponse);
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
 * \class QtAws::Amp::AmpResponsePrivate
 * \brief The AmpResponsePrivate class provides private implementation for AmpResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a AmpResponsePrivate object with public implementation \a q.
 */
AmpResponsePrivate::AmpResponsePrivate(
    AmpResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Amp
} // namespace QtAws
