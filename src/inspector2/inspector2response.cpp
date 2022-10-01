// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "inspector2response.h"
#include "inspector2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::Inspector2Response
 * \brief The Inspector2Response class provides an interface for Inspector2 responses.
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a Inspector2Response object with parent \a parent.
 */
Inspector2Response::Inspector2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Inspector2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Inspector2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Inspector2ResponsePrivate.
 */
Inspector2Response::Inspector2Response(Inspector2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Inspector2Response::parseFailure(QIODevice &response)
{
    //Q_D(Inspector2Response);
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
 * \class QtAws::Inspector2::Inspector2ResponsePrivate
 * \brief The Inspector2ResponsePrivate class provides private implementation for Inspector2Response.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a Inspector2ResponsePrivate object with public implementation \a q.
 */
Inspector2ResponsePrivate::Inspector2ResponsePrivate(
    Inspector2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Inspector2
} // namespace QtAws
