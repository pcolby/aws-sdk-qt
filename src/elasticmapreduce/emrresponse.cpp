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

#include "emrresponse.h"
#include "emrresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::EMRResponse
 * \brief The EMRResponse class provides an interface for EMR responses.
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a EMRResponse object with parent \a parent.
 */
EMRResponse::EMRResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EMRResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EMRResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EMRResponsePrivate.
 */
EMRResponse::EMRResponse(EMRResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EMRResponse::parseFailure(QIODevice &response)
{
    Q_D(EMRResponse);
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
 * \class QtAws::EMR::EMRResponsePrivate
 * \brief The EMRResponsePrivate class provides private implementation for EMRResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a EMRResponsePrivate object with public implementation \a q.
 */
EMRResponsePrivate::EMRResponsePrivate(
    EMRResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace EMR
} // namespace QtAws
