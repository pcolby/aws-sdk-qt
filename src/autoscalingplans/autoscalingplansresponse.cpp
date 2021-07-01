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

#include "autoscalingplansresponse.h"
#include "autoscalingplansresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::AutoScalingPlansResponse
 * \brief The AutoScalingPlansResponse class provides an interface for AutoScalingPlans responses.
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a AutoScalingPlansResponse object with parent \a parent.
 */
AutoScalingPlansResponse::AutoScalingPlansResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AutoScalingPlansResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AutoScalingPlansResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AutoScalingPlansResponsePrivate.
 */
AutoScalingPlansResponse::AutoScalingPlansResponse(AutoScalingPlansResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AutoScalingPlansResponse::parseFailure(QIODevice &response)
{
    //Q_D(AutoScalingPlansResponse);
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
 * \class QtAws::AutoScalingPlans::AutoScalingPlansResponsePrivate
 * \brief The AutoScalingPlansResponsePrivate class provides private implementation for AutoScalingPlansResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a AutoScalingPlansResponsePrivate object with public implementation \a q.
 */
AutoScalingPlansResponsePrivate::AutoScalingPlansResponsePrivate(
    AutoScalingPlansResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AutoScalingPlans
} // namespace QtAws
