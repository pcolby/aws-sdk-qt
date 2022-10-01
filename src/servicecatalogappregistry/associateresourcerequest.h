// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOURCEREQUEST_H
#define QTAWS_ASSOCIATERESOURCEREQUEST_H

#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class AssociateResourceRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT AssociateResourceRequest : public ServiceCatalogAppRegistryRequest {

public:
    AssociateResourceRequest(const AssociateResourceRequest &other);
    AssociateResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateResourceRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
