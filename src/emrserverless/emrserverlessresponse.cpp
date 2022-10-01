/*
    Copyright 2013-2021 Paul Colby

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

#include "emrserverlessresponse.h"
#include "emrserverlessresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace EmrServerless {

/*!
 * \class QtAws::EmrServerless::EmrServerlessResponse
 * \brief The EmrServerlessResponse class provides an interface for EmrServerless responses.
 *
 * \inmodule QtAwsEmrServerless
 */

/*!
 * Constructs a EmrServerlessResponse object with parent \a parent.
 */
EmrServerlessResponse::EmrServerlessResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EmrServerlessResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EmrServerlessResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EmrServerlessResponsePrivate.
 */
EmrServerlessResponse::EmrServerlessResponse(EmrServerlessResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EmrServerlessResponse::parseFailure(QIODevice &response)
{
    //Q_D(EmrServerlessResponse);
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
 * \class QtAws::EmrServerless::EmrServerlessResponsePrivate
 * \brief The EmrServerlessResponsePrivate class provides private implementation for EmrServerlessResponse.
 * \internal
 *
 * \inmodule QtAwsEmrServerless
 */

/*!
 * Constructs a EmrServerlessResponsePrivate object with public implementation \a q.
 */
EmrServerlessResponsePrivate::EmrServerlessResponsePrivate(
    EmrServerlessResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace EmrServerless
} // namespace QtAws
