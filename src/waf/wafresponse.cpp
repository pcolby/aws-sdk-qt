/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "wafresponse.h"
#include "wafresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::WAFResponse
 * \brief The WAFResponse class provides an interface for WAF responses.
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a WAFResponse object with parent \a parent.
 */
WAFResponse::WAFResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WAFResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a WAFResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WAFResponsePrivate.
 */
WAFResponse::WAFResponse(WAFResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void WAFResponse::parseFailure(QIODevice &response)
{
    Q_D(WAFResponse);
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
 * \class QtAws::WAF::WAFResponsePrivate
 * \brief The WAFResponsePrivate class provides private implementation for WAFResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a WAFResponsePrivate object with public implementation \a q.
 */
WAFResponsePrivate::WAFResponsePrivate(
    WAFResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace WAF
} // namespace QtAws
