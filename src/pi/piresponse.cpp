// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "piresponse.h"
#include "piresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pi {

/*!
 * \class QtAws::Pi::PiResponse
 * \brief The PiResponse class provides an interface for Pi responses.
 *
 * \inmodule QtAwsPi
 */

/*!
 * Constructs a PiResponse object with parent \a parent.
 */
PiResponse::PiResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PiResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a PiResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PiResponsePrivate.
 */
PiResponse::PiResponse(PiResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void PiResponse::parseFailure(QIODevice &response)
{
    //Q_D(PiResponse);
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
 * \class QtAws::Pi::PiResponsePrivate
 * \brief The PiResponsePrivate class provides private implementation for PiResponse.
 * \internal
 *
 * \inmodule QtAwsPi
 */

/*!
 * Constructs a PiResponsePrivate object with public implementation \a q.
 */
PiResponsePrivate::PiResponsePrivate(
    PiResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Pi
} // namespace QtAws
