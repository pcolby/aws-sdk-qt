// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTRIBUTEGROUPSREQUEST_H
#define QTAWS_LISTATTRIBUTEGROUPSREQUEST_H

#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAttributeGroupsRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT ListAttributeGroupsRequest : public ServiceCatalogAppRegistryRequest {

public:
    ListAttributeGroupsRequest(const ListAttributeGroupsRequest &other);
    ListAttributeGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttributeGroupsRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
