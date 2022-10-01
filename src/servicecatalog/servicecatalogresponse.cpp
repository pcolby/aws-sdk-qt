// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
