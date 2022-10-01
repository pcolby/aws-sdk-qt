// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "wafv2response.h"
#include "wafv2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wafv2 {

/*!
 * \class QtAws::Wafv2::Wafv2Response
 * \brief The Wafv2Response class provides an interface for Wafv2 responses.
 *
 * \inmodule QtAwsWafv2
 */

/*!
 * Constructs a Wafv2Response object with parent \a parent.
 */
Wafv2Response::Wafv2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Wafv2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Wafv2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Wafv2ResponsePrivate.
 */
Wafv2Response::Wafv2Response(Wafv2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Wafv2Response::parseFailure(QIODevice &response)
{
    //Q_D(Wafv2Response);
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
 * \class QtAws::Wafv2::Wafv2ResponsePrivate
 * \brief The Wafv2ResponsePrivate class provides private implementation for Wafv2Response.
 * \internal
 *
 * \inmodule QtAwsWafv2
 */

/*!
 * Constructs a Wafv2ResponsePrivate object with public implementation \a q.
 */
Wafv2ResponsePrivate::Wafv2ResponsePrivate(
    Wafv2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Wafv2
} // namespace QtAws
