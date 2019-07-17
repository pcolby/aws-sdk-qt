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

#include "servicecatalogresponse.h"
#include "servicecatalogresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ServiceCatalogResponse
 * \brief The ServiceCatalogResponse class provides an interface for ServiceCatalog responses.
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ServiceCatalogResponse object with parent \a parent.
 */
ServiceCatalogResponse::ServiceCatalogResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ServiceCatalogResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ServiceCatalogResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ServiceCatalogResponsePrivate.
 */
ServiceCatalogResponse::ServiceCatalogResponse(ServiceCatalogResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ServiceCatalogResponse::parseFailure(QIODevice &response)
{
    //Q_D(ServiceCatalogResponse);
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
 * \class QtAws::ServiceCatalog::ServiceCatalogResponsePrivate
 * \brief The ServiceCatalogResponsePrivate class provides private implementation for ServiceCatalogResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ServiceCatalogResponsePrivate object with public implementation \a q.
 */
ServiceCatalogResponsePrivate::ServiceCatalogResponsePrivate(
    ServiceCatalogResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
