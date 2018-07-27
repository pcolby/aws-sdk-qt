/*
    Copyright 2013-2018 Paul Colby

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

#include "dlmresponse.h"
#include "dlmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DLM {

/*!
 * \class QtAws::DLM::DlmResponse
 * \brief The DlmResponse class provides an interface for DLM responses.
 *
 * \inmodule QtAwsDLM
 */

/*!
 * Constructs a DlmResponse object with parent \a parent.
 */
DlmResponse::DlmResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DlmResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DlmResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DlmResponsePrivate.
 */
DlmResponse::DlmResponse(DlmResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DlmResponse::parseFailure(QIODevice &response)
{
    //Q_D(DlmResponse);
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
 * \class QtAws::DLM::DlmResponsePrivate
 * \brief The DlmResponsePrivate class provides private implementation for DlmResponse.
 * \internal
 *
 * \inmodule QtAwsDLM
 */

/*!
 * Constructs a DlmResponsePrivate object with public implementation \a q.
 */
DlmResponsePrivate::DlmResponsePrivate(
    DlmResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DLM
} // namespace QtAws
