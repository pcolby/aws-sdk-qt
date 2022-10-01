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

#include "emrcontainersresponse.h"
#include "emrcontainersresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emrcontainers {

/*!
 * \class QtAws::Emrcontainers::EmrcontainersResponse
 * \brief The EmrcontainersResponse class provides an interface for Emrcontainers responses.
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a EmrcontainersResponse object with parent \a parent.
 */
EmrcontainersResponse::EmrcontainersResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EmrcontainersResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EmrcontainersResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EmrcontainersResponsePrivate.
 */
EmrcontainersResponse::EmrcontainersResponse(EmrcontainersResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EmrcontainersResponse::parseFailure(QIODevice &response)
{
    //Q_D(EmrcontainersResponse);
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
 * \class QtAws::Emrcontainers::EmrcontainersResponsePrivate
 * \brief The EmrcontainersResponsePrivate class provides private implementation for EmrcontainersResponse.
 * \internal
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a EmrcontainersResponsePrivate object with public implementation \a q.
 */
EmrcontainersResponsePrivate::EmrcontainersResponsePrivate(
    EmrcontainersResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Emrcontainers
} // namespace QtAws
