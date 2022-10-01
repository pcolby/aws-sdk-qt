// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICECATALOGAPPREGISTRYRESPONSE_H
#define QTAWS_SERVICECATALOGAPPREGISTRYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsservicecatalogappregistryglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ServiceCatalogAppRegistryResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT ServiceCatalogAppRegistryResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ServiceCatalogAppRegistryResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ServiceCatalogAppRegistryResponse(ServiceCatalogAppRegistryResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ServiceCatalogAppRegistryResponse)
    Q_DISABLE_COPY(ServiceCatalogAppRegistryResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
