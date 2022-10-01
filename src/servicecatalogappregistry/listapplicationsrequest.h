// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSREQUEST_H
#define QTAWS_LISTAPPLICATIONSREQUEST_H

#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListApplicationsRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT ListApplicationsRequest : public ServiceCatalogAppRegistryRequest {

public:
    ListApplicationsRequest(const ListApplicationsRequest &other);
    ListApplicationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationsRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
