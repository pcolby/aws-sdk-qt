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

#include "braketresponse.h"
#include "braketresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::BraketResponse
 * \brief The BraketResponse class provides an interface for Braket responses.
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a BraketResponse object with parent \a parent.
 */
BraketResponse::BraketResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new BraketResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a BraketResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BraketResponsePrivate.
 */
BraketResponse::BraketResponse(BraketResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void BraketResponse::parseFailure(QIODevice &response)
{
    //Q_D(BraketResponse);
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
 * \class QtAws::Braket::BraketResponsePrivate
 * \brief The BraketResponsePrivate class provides private implementation for BraketResponse.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a BraketResponsePrivate object with public implementation \a q.
 */
BraketResponsePrivate::BraketResponsePrivate(
    BraketResponse * const q) : q_ptr(q)
{

}

} // namespace Braket
} // namespace QtAws
