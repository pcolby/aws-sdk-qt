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

#include "connectcontactlensresponse.h"
#include "connectcontactlensresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectContactLens {

/*!
 * \class QtAws::ConnectContactLens::ConnectContactLensResponse
 * \brief The ConnectContactLensResponse class provides an interface for ConnectContactLens responses.
 *
 * \inmodule QtAwsConnectContactLens
 */

/*!
 * Constructs a ConnectContactLensResponse object with parent \a parent.
 */
ConnectContactLensResponse::ConnectContactLensResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new ConnectContactLensResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a ConnectContactLensResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConnectContactLensResponsePrivate.
 */
ConnectContactLensResponse::ConnectContactLensResponse(ConnectContactLensResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void ConnectContactLensResponse::parseFailure(QIODevice &response)
{
    //Q_D(ConnectContactLensResponse);
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
 * \class QtAws::ConnectContactLens::ConnectContactLensResponsePrivate
 * \brief The ConnectContactLensResponsePrivate class provides private implementation for ConnectContactLensResponse.
 * \internal
 *
 * \inmodule QtAwsConnectContactLens
 */

/*!
 * Constructs a ConnectContactLensResponsePrivate object with public implementation \a q.
 */
ConnectContactLensResponsePrivate::ConnectContactLensResponsePrivate(
    ConnectContactLensResponse * const q) : q_ptr(q)
{

}

} // namespace ConnectContactLens
} // namespace QtAws
