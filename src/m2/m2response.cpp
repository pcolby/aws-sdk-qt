// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "m2response.h"
#include "m2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::M2Response
 * \brief The M2Response class provides an interface for M2 responses.
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a M2Response object with parent \a parent.
 */
M2Response::M2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new M2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a M2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from M2ResponsePrivate.
 */
M2Response::M2Response(M2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void M2Response::parseFailure(QIODevice &response)
{
    //Q_D(M2Response);
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
 * \class QtAws::M2::M2ResponsePrivate
 * \brief The M2ResponsePrivate class provides private implementation for M2Response.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a M2ResponsePrivate object with public implementation \a q.
 */
M2ResponsePrivate::M2ResponsePrivate(
    M2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace M2
} // namespace QtAws
