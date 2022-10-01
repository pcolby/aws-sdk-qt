// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATEDRESOURCEREQUEST_H
#define QTAWS_GETASSOCIATEDRESOURCEREQUEST_H

#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class GetAssociatedResourceRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT GetAssociatedResourceRequest : public ServiceCatalogAppRegistryRequest {

public:
    GetAssociatedResourceRequest(const GetAssociatedResourceRequest &other);
    GetAssociatedResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssociatedResourceRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
