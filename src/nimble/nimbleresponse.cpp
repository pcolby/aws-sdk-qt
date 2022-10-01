// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "nimbleresponse.h"
#include "nimbleresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::NimbleResponse
 * \brief The NimbleResponse class provides an interface for Nimble responses.
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a NimbleResponse object with parent \a parent.
 */
NimbleResponse::NimbleResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new NimbleResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a NimbleResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from NimbleResponsePrivate.
 */
NimbleResponse::NimbleResponse(NimbleResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void NimbleResponse::parseFailure(QIODevice &response)
{
    //Q_D(NimbleResponse);
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
 * \class QtAws::Nimble::NimbleResponsePrivate
 * \brief The NimbleResponsePrivate class provides private implementation for NimbleResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a NimbleResponsePrivate object with public implementation \a q.
 */
NimbleResponsePrivate::NimbleResponsePrivate(
    NimbleResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Nimble
} // namespace QtAws
