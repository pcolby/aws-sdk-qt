// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sesv2response.h"
#include "sesv2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::SESv2Response
 * \brief The SESv2Response class provides an interface for SESv2 responses.
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a SESv2Response object with parent \a parent.
 */
SESv2Response::SESv2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SESv2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SESv2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SESv2ResponsePrivate.
 */
SESv2Response::SESv2Response(SESv2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SESv2Response::parseFailure(QIODevice &response)
{
    //Q_D(SESv2Response);
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
 * \class QtAws::SESv2::SESv2ResponsePrivate
 * \brief The SESv2ResponsePrivate class provides private implementation for SESv2Response.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a SESv2ResponsePrivate object with public implementation \a q.
 */
SESv2ResponsePrivate::SESv2ResponsePrivate(
    SESv2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SESv2
} // namespace QtAws
