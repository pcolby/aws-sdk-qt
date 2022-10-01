// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICECATALOGCLIENT_P_H
#define QTAWS_SERVICECATALOGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ServiceCatalog {

class ServiceCatalogClient;

class ServiceCatalogClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ServiceCatalogClientPrivate(ServiceCatalogClient * const q);

private:
    Q_DECLARE_PUBLIC(ServiceCatalogClient)
    Q_DISABLE_COPY(ServiceCatalogClientPrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
