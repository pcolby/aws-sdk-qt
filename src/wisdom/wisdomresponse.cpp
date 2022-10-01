// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "wisdomresponse.h"
#include "wisdomresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::WisdomResponse
 * \brief The WisdomResponse class provides an interface for Wisdom responses.
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a WisdomResponse object with parent \a parent.
 */
WisdomResponse::WisdomResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WisdomResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a WisdomResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WisdomResponsePrivate.
 */
WisdomResponse::WisdomResponse(WisdomResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void WisdomResponse::parseFailure(QIODevice &response)
{
    //Q_D(WisdomResponse);
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
 * \class QtAws::Wisdom::WisdomResponsePrivate
 * \brief The WisdomResponsePrivate class provides private implementation for WisdomResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a WisdomResponsePrivate object with public implementation \a q.
 */
WisdomResponsePrivate::WisdomResponsePrivate(
    WisdomResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Wisdom
} // namespace QtAws
