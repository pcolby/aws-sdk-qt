/*
    Copyright 2013-2020 Paul Colby

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

#include "wafresponse.h"
#include "wafresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::WafResponse
 * \brief The WafResponse class provides an interface for WAF responses.
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a WafResponse object with parent \a parent.
 */
WafResponse::WafResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WafResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a WafResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WafResponsePrivate.
 */
WafResponse::WafResponse(WafResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void WafResponse::parseFailure(QIODevice &response)
{
    //Q_D(WafResponse);
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
 * \class QtAws::WAF::WafResponsePrivate
 * \brief The WafResponsePrivate class provides private implementation for WafResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a WafResponsePrivate object with public implementation \a q.
 */
WafResponsePrivate::WafResponsePrivate(
    WafResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace WAF
} // namespace QtAws
