/*
    Copyright 2013-2019 Paul Colby

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

#include "mqresponse.h"
#include "mqresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::MqResponse
 * \brief The MqResponse class provides an interface for MQ responses.
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a MqResponse object with parent \a parent.
 */
MqResponse::MqResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MqResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MqResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MqResponsePrivate.
 */
MqResponse::MqResponse(MqResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MqResponse::parseFailure(QIODevice &response)
{
    //Q_D(MqResponse);
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
 * \class QtAws::MQ::MqResponsePrivate
 * \brief The MqResponsePrivate class provides private implementation for MqResponse.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a MqResponsePrivate object with public implementation \a q.
 */
MqResponsePrivate::MqResponsePrivate(
    MqResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MQ
} // namespace QtAws
