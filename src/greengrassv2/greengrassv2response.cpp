// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "greengrassv2response.h"
#include "greengrassv2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::GreengrassV2Response
 * \brief The GreengrassV2Response class provides an interface for GreengrassV2 responses.
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a GreengrassV2Response object with parent \a parent.
 */
GreengrassV2Response::GreengrassV2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GreengrassV2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GreengrassV2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GreengrassV2ResponsePrivate.
 */
GreengrassV2Response::GreengrassV2Response(GreengrassV2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GreengrassV2Response::parseFailure(QIODevice &response)
{
    //Q_D(GreengrassV2Response);
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
 * \class QtAws::GreengrassV2::GreengrassV2ResponsePrivate
 * \brief The GreengrassV2ResponsePrivate class provides private implementation for GreengrassV2Response.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a GreengrassV2ResponsePrivate object with public implementation \a q.
 */
GreengrassV2ResponsePrivate::GreengrassV2ResponsePrivate(
    GreengrassV2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace GreengrassV2
} // namespace QtAws
