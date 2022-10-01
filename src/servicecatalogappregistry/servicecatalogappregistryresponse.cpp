// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "servicecatalogappregistryresponse.h"
#include "servicecatalogappregistryresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ServiceCatalogAppRegistryResponse
 * \brief The ServiceCatalogAppRegistryResponse class provides an interface for ServiceCatalogAppRegistry responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ServiceCatalogAppRegistryResponse object with parent \a parent.
 */
ServiceCatalogAppRegistryResponse::ServiceCatalogAppRegistryResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ServiceCatalogAppRegistryResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ServiceCatalogAppRegistryResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ServiceCatalogAppRegistryResponsePrivate.
 */
ServiceCatalogAppRegistryResponse::ServiceCatalogAppRegistryResponse(ServiceCatalogAppRegistryResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ServiceCatalogAppRegistryResponse::parseFailure(QIODevice &response)
{
    //Q_D(ServiceCatalogAppRegistryResponse);
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
 * \class QtAws::ServiceCatalogAppRegistry::ServiceCatalogAppRegistryResponsePrivate
 * \brief The ServiceCatalogAppRegistryResponsePrivate class provides private implementation for ServiceCatalogAppRegistryResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ServiceCatalogAppRegistryResponsePrivate object with public implementation \a q.
 */
ServiceCatalogAppRegistryResponsePrivate::ServiceCatalogAppRegistryResponsePrivate(
    ServiceCatalogAppRegistryResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
