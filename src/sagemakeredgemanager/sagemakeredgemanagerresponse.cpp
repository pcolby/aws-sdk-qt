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

#include "sagemakeredgemanagerresponse.h"
#include "sagemakeredgemanagerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SagemakerEdgeManager {

/*!
 * \class QtAws::SagemakerEdgeManager::SagemakerEdgeManagerResponse
 * \brief The SagemakerEdgeManagerResponse class provides an interface for SagemakerEdgeManager responses.
 *
 * \inmodule QtAwsSagemakerEdgeManager
 */

/*!
 * Constructs a SagemakerEdgeManagerResponse object with parent \a parent.
 */
SagemakerEdgeManagerResponse::SagemakerEdgeManagerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new SagemakerEdgeManagerResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a SagemakerEdgeManagerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SagemakerEdgeManagerResponsePrivate.
 */
SagemakerEdgeManagerResponse::SagemakerEdgeManagerResponse(SagemakerEdgeManagerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void SagemakerEdgeManagerResponse::parseFailure(QIODevice &response)
{
    //Q_D(SagemakerEdgeManagerResponse);
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
 * \class QtAws::SagemakerEdgeManager::SagemakerEdgeManagerResponsePrivate
 * \brief The SagemakerEdgeManagerResponsePrivate class provides private implementation for SagemakerEdgeManagerResponse.
 * \internal
 *
 * \inmodule QtAwsSagemakerEdgeManager
 */

/*!
 * Constructs a SagemakerEdgeManagerResponsePrivate object with public implementation \a q.
 */
SagemakerEdgeManagerResponsePrivate::SagemakerEdgeManagerResponsePrivate(
    SagemakerEdgeManagerResponse * const q) : q_ptr(q)
{

}

} // namespace SagemakerEdgeManager
} // namespace QtAws
