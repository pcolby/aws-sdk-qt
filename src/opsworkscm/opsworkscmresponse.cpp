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

#include "opsworkscmresponse.h"
#include "opsworkscmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorksCM {

/*!
 * \class QtAws::OpsWorksCM::OpsWorksCMResponse
 * \brief The OpsWorksCMResponse class provides an interface for OpsWorksCM responses.
 *
 * \inmodule QtAwsOpsWorksCM
 */

/*!
 * Constructs a OpsWorksCMResponse object with parent \a parent.
 */
OpsWorksCMResponse::OpsWorksCMResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new OpsWorksCMResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a OpsWorksCMResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from OpsWorksCMResponsePrivate.
 */
OpsWorksCMResponse::OpsWorksCMResponse(OpsWorksCMResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void OpsWorksCMResponse::parseFailure(QIODevice &response)
{
    //Q_D(OpsWorksCMResponse);
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
 * \class QtAws::OpsWorksCM::OpsWorksCMResponsePrivate
 * \brief The OpsWorksCMResponsePrivate class provides private implementation for OpsWorksCMResponse.
 * \internal
 *
 * \inmodule QtAwsOpsWorksCM
 */

/*!
 * Constructs a OpsWorksCMResponsePrivate object with public implementation \a q.
 */
OpsWorksCMResponsePrivate::OpsWorksCMResponsePrivate(
    OpsWorksCMResponse * const q) : q_ptr(q)
{

}

} // namespace OpsWorksCM
} // namespace QtAws
