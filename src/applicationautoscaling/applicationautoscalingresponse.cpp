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

#include "applicationautoscalingresponse.h"
#include "applicationautoscalingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationAutoScaling {

/*!
 * \class QtAws::ApplicationAutoScaling::ApplicationAutoScalingResponse
 * \brief The ApplicationAutoScalingResponse class provides an interface for ApplicationAutoScaling responses.
 *
 * \inmodule QtAwsApplicationAutoScaling
 */

/*!
 * Constructs a ApplicationAutoScalingResponse object with parent \a parent.
 */
ApplicationAutoScalingResponse::ApplicationAutoScalingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ApplicationAutoScalingResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ApplicationAutoScalingResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApplicationAutoScalingResponsePrivate.
 */
ApplicationAutoScalingResponse::ApplicationAutoScalingResponse(ApplicationAutoScalingResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ApplicationAutoScalingResponse::parseFailure(QIODevice &response)
{
    Q_D(ApplicationAutoScalingResponse);
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
 * \class QtAws::ApplicationAutoScaling::ApplicationAutoScalingResponsePrivate
 * \brief The ApplicationAutoScalingResponsePrivate class provides private implementation for ApplicationAutoScalingResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationAutoScaling
 */

/*!
 * Constructs a ApplicationAutoScalingResponsePrivate object with public implementation \a q.
 */
ApplicationAutoScalingResponsePrivate::ApplicationAutoScalingResponsePrivate(
    ApplicationAutoScalingResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ApplicationAutoScaling
} // namespace QtAws
