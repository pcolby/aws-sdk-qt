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

#include "workmailresponse.h"
#include "workmailresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::WorkMailResponse
 * \brief The WorkMailResponse class provides an interface for WorkMail responses.
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a WorkMailResponse object with parent \a parent.
 */
WorkMailResponse::WorkMailResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WorkMailResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a WorkMailResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkMailResponsePrivate.
 */
WorkMailResponse::WorkMailResponse(WorkMailResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void WorkMailResponse::parseFailure(QIODevice &response)
{
    //Q_D(WorkMailResponse);
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
 * \class QtAws::WorkMail::WorkMailResponsePrivate
 * \brief The WorkMailResponsePrivate class provides private implementation for WorkMailResponse.
 * \internal
 *
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a WorkMailResponsePrivate object with public implementation \a q.
 */
WorkMailResponsePrivate::WorkMailResponsePrivate(
    WorkMailResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace WorkMail
} // namespace QtAws
