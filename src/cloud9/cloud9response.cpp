// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloud9response.h"
#include "cloud9response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Cloud9 {

/*!
 * \class QtAws::Cloud9::Cloud9Response
 * \brief The Cloud9Response class provides an interface for Cloud9 responses.
 *
 * \inmodule QtAwsCloud9
 */

/*!
 * Constructs a Cloud9Response object with parent \a parent.
 */
Cloud9Response::Cloud9Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Cloud9ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Cloud9Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Cloud9ResponsePrivate.
 */
Cloud9Response::Cloud9Response(Cloud9ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Cloud9Response::parseFailure(QIODevice &response)
{
    //Q_D(Cloud9Response);
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
 * \class QtAws::Cloud9::Cloud9ResponsePrivate
 * \brief The Cloud9ResponsePrivate class provides private implementation for Cloud9Response.
 * \internal
 *
 * \inmodule QtAwsCloud9
 */

/*!
 * Constructs a Cloud9ResponsePrivate object with public implementation \a q.
 */
Cloud9ResponsePrivate::Cloud9ResponsePrivate(
    Cloud9Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Cloud9
} // namespace QtAws
