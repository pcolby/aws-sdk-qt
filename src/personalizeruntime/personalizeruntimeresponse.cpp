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

#include "personalizeruntimeresponse.h"
#include "personalizeruntimeresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace PersonalizeRuntime {

/*!
 * \class QtAws::PersonalizeRuntime::PersonalizeRuntimeResponse
 * \brief The PersonalizeRuntimeResponse class provides an interface for PersonalizeRuntime responses.
 *
 * \inmodule QtAwsPersonalizeRuntime
 */

/*!
 * Constructs a PersonalizeRuntimeResponse object with parent \a parent.
 */
PersonalizeRuntimeResponse::PersonalizeRuntimeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new PersonalizeRuntimeResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a PersonalizeRuntimeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PersonalizeRuntimeResponsePrivate.
 */
PersonalizeRuntimeResponse::PersonalizeRuntimeResponse(PersonalizeRuntimeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void PersonalizeRuntimeResponse::parseFailure(QIODevice &response)
{
    //Q_D(PersonalizeRuntimeResponse);
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
 * \class QtAws::PersonalizeRuntime::PersonalizeRuntimeResponsePrivate
 * \brief The PersonalizeRuntimeResponsePrivate class provides private implementation for PersonalizeRuntimeResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalizeRuntime
 */

/*!
 * Constructs a PersonalizeRuntimeResponsePrivate object with public implementation \a q.
 */
PersonalizeRuntimeResponsePrivate::PersonalizeRuntimeResponsePrivate(
    PersonalizeRuntimeResponse * const q) : q_ptr(q)
{

}

} // namespace PersonalizeRuntime
} // namespace QtAws
