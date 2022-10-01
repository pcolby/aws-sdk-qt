// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mturkresponse.h"
#include "mturkresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::MTurkResponse
 * \brief The MTurkResponse class provides an interface for MTurk responses.
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a MTurkResponse object with parent \a parent.
 */
MTurkResponse::MTurkResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MTurkResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MTurkResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MTurkResponsePrivate.
 */
MTurkResponse::MTurkResponse(MTurkResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MTurkResponse::parseFailure(QIODevice &response)
{
    //Q_D(MTurkResponse);
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
 * \class QtAws::MTurk::MTurkResponsePrivate
 * \brief The MTurkResponsePrivate class provides private implementation for MTurkResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a MTurkResponsePrivate object with public implementation \a q.
 */
MTurkResponsePrivate::MTurkResponsePrivate(
    MTurkResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MTurk
} // namespace QtAws
