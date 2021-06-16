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
namespace EMRContainers {

/*!
 * \class QtAws::EMRContainers::EMRContainersResponse
 * \brief The EMRContainersResponse class provides an interface for EMRContainers responses.
 *
 * \inmodule QtAwsEMRContainers
 */

/*!
 * Constructs a EMRContainersResponse object with parent \a parent.
 */
EMRContainersResponse::EMRContainersResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EMRContainersResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EMRContainersResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EMRContainersResponsePrivate.
 */
EMRContainersResponse::EMRContainersResponse(EMRContainersResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EMRContainersResponse::parseFailure(QIODevice &response)
{
    //Q_D(EMRContainersResponse);
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
 * \class QtAws::EMRContainers::EMRContainersResponsePrivate
 * \brief The EMRContainersResponsePrivate class provides private implementation for EMRContainersResponse.
 * \internal
 *
 * \inmodule QtAwsEMRContainers
 */

/*!
 * Constructs a EMRContainersResponsePrivate object with public implementation \a q.
 */
EMRContainersResponsePrivate::EMRContainersResponsePrivate(
    EMRContainersResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace EMRContainers
} // namespace QtAws
