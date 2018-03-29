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

#ifndef QTAWS_SERVICECATALOGCLIENTREQUEST_P_H
#define QTAWS_SERVICECATALOGCLIENTREQUEST_P_H

#include "servicecatalog_p.h"
#include "servicecatalogclientrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ServiceCatalogClientRequest;

class QTAWS_EXPORT ServiceCatalogClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ServiceCatalogClientRequest::Action action; ///< ServiceCatalog action to be performed.
    QString apiVersion;        ///< ServiceCatalog API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ServiceCatalog request (query string) parameters. @todo?

    ServiceCatalogClientRequestPrivate(const ServiceCatalogClientRequest::Action action, ServiceCatalogClientRequest * const q);
    ServiceCatalogClientRequestPrivate(const ServiceCatalogClientRequestPrivate &other, ServiceCatalogClientRequest * const q);

    static QString toString(const ServiceCatalogClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ServiceCatalogClientRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
