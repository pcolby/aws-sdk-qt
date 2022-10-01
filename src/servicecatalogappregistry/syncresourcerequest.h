// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNCRESOURCEREQUEST_H
#define QTAWS_SYNCRESOURCEREQUEST_H

#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class SyncResourceRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT SyncResourceRequest : public ServiceCatalogAppRegistryRequest {

public:
    SyncResourceRequest(const SyncResourceRequest &other);
    SyncResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SyncResourceRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
