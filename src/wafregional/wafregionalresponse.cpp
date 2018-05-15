/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "wafregionalresponse.h"
#include "wafregionalresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::WAFRegionalResponse
 * \brief The WAFRegionalResponse class provides an interface for WAFRegional responses.
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a WAFRegionalResponse object with parent \a parent.
 */
WAFRegionalResponse::WAFRegionalResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WAFRegionalResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a WAFRegionalResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WAFRegionalResponsePrivate.
 */
WAFRegionalResponse::WAFRegionalResponse(WAFRegionalResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void WAFRegionalResponse::parseFailure(QIODevice &response)
{
    //Q_D(WAFRegionalResponse);
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
 * \class QtAws::WAFRegional::WAFRegionalResponsePrivate
 * \brief The WAFRegionalResponsePrivate class provides private implementation for WAFRegionalResponse.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a WAFRegionalResponsePrivate object with public implementation \a q.
 */
WAFRegionalResponsePrivate::WAFRegionalResponsePrivate(
    WAFRegionalResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace WAFRegional
} // namespace QtAws
