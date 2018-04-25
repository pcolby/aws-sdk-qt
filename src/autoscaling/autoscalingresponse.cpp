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

#include "autoscalingresponse.h"
#include "autoscalingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::AutoScalingResponse
 * \brief The AutoScalingResponse class provides an interface for AutoScaling responses.
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a AutoScalingResponse object with parent \a parent.
 */
AutoScalingResponse::AutoScalingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AutoScalingResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AutoScalingResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AutoScalingResponsePrivate.
 */
AutoScalingResponse::AutoScalingResponse(AutoScalingResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AutoScalingResponse::parseFailure(QIODevice &response)
{
    Q_D(AutoScalingResponse);
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
 * \class QtAws::AutoScaling::AutoScalingResponsePrivate
 * \brief The AutoScalingResponsePrivate class provides private implementation for AutoScalingResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a AutoScalingResponsePrivate object with public implementation \a q.
 */
AutoScalingResponsePrivate::AutoScalingResponsePrivate(
    AutoScalingResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AutoScaling
} // namespace QtAws
