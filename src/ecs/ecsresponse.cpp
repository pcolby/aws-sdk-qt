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

#include "ecsresponse.h"
#include "ecsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/*!
 * \class QtAws::ECS::EcsResponse
 * \brief The EcsResponse class provides an interface for ECS responses.
 *
 * \inmodule QtAwsECS
 */

/*!
 * Constructs a EcsResponse object with parent \a parent.
 */
EcsResponse::EcsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new EcsResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a EcsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EcsResponsePrivate.
 */
EcsResponse::EcsResponse(EcsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void EcsResponse::parseFailure(QIODevice &response)
{
    //Q_D(EcsResponse);
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
 * \class QtAws::ECS::EcsResponsePrivate
 * \brief The EcsResponsePrivate class provides private implementation for EcsResponse.
 * \internal
 *
 * \inmodule QtAwsECS
 */

/*!
 * Constructs a EcsResponsePrivate object with public implementation \a q.
 */
EcsResponsePrivate::EcsResponsePrivate(
    EcsResponse * const q) : q_ptr(q)
{

}

} // namespace ECS
} // namespace QtAws
