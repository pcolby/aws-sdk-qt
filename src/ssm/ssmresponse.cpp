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

#include "ssmresponse.h"
#include "ssmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::SsmResponse
 * \brief The SsmResponse class provides an interface for SSM responses.
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a SsmResponse object with parent \a parent.
 */
SsmResponse::SsmResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SsmResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SsmResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsmResponsePrivate.
 */
SsmResponse::SsmResponse(SsmResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SsmResponse::parseFailure(QIODevice &response)
{
    //Q_D(SsmResponse);
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
 * \class QtAws::SSM::SsmResponsePrivate
 * \brief The SsmResponsePrivate class provides private implementation for SsmResponse.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a SsmResponsePrivate object with public implementation \a q.
 */
SsmResponsePrivate::SsmResponsePrivate(
    SsmResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SSM
} // namespace QtAws
