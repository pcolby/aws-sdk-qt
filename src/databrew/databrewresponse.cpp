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

#include "databrewresponse.h"
#include "databrewresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DataBrewResponse
 * \brief The DataBrewResponse class provides an interface for DataBrew responses.
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DataBrewResponse object with parent \a parent.
 */
DataBrewResponse::DataBrewResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DataBrewResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DataBrewResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DataBrewResponsePrivate.
 */
DataBrewResponse::DataBrewResponse(DataBrewResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DataBrewResponse::parseFailure(QIODevice &response)
{
    //Q_D(DataBrewResponse);
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
 * \class QtAws::DataBrew::DataBrewResponsePrivate
 * \brief The DataBrewResponsePrivate class provides private implementation for DataBrewResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DataBrewResponsePrivate object with public implementation \a q.
 */
DataBrewResponsePrivate::DataBrewResponsePrivate(
    DataBrewResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DataBrew
} // namespace QtAws
