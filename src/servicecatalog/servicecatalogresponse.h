// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICECATALOGRESPONSE_H
#define QTAWS_SERVICECATALOGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsservicecatalogglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ServiceCatalog {

class ServiceCatalogResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ServiceCatalogResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ServiceCatalogResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ServiceCatalogResponse(ServiceCatalogResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ServiceCatalogResponse)
    Q_DISABLE_COPY(ServiceCatalogResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
