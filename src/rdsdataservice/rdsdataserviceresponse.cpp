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

#include "rdsdataserviceresponse.h"
#include "rdsdataserviceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDSDataService {

/*!
 * \class QtAws::RDSDataService::RDSDataServiceResponse
 * \brief The RDSDataServiceResponse class provides an interface for RDSDataService responses.
 *
 * \inmodule QtAwsRDSDataService
 */

/*!
 * Constructs a RDSDataServiceResponse object with parent \a parent.
 */
RDSDataServiceResponse::RDSDataServiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RDSDataServiceResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RDSDataServiceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RDSDataServiceResponsePrivate.
 */
RDSDataServiceResponse::RDSDataServiceResponse(RDSDataServiceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RDSDataServiceResponse::parseFailure(QIODevice &response)
{
    //Q_D(RDSDataServiceResponse);
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
 * \class QtAws::RDSDataService::RDSDataServiceResponsePrivate
 * \brief The RDSDataServiceResponsePrivate class provides private implementation for RDSDataServiceResponse.
 * \internal
 *
 * \inmodule QtAwsRDSDataService
 */

/*!
 * Constructs a RDSDataServiceResponsePrivate object with public implementation \a q.
 */
RDSDataServiceResponsePrivate::RDSDataServiceResponsePrivate(
    RDSDataServiceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace RDSDataService
} // namespace QtAws
