// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "macieresponse.h"
#include "macieresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::MacieResponse
 * \brief The MacieResponse class provides an interface for Macie responses.
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a MacieResponse object with parent \a parent.
 */
MacieResponse::MacieResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MacieResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MacieResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MacieResponsePrivate.
 */
MacieResponse::MacieResponse(MacieResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MacieResponse::parseFailure(QIODevice &response)
{
    //Q_D(MacieResponse);
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
 * \class QtAws::Macie::MacieResponsePrivate
 * \brief The MacieResponsePrivate class provides private implementation for MacieResponse.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a MacieResponsePrivate object with public implementation \a q.
 */
MacieResponsePrivate::MacieResponsePrivate(
    MacieResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Macie
} // namespace QtAws
