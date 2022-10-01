// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDATTRIBUTEGROUPSREQUEST_H
#define QTAWS_LISTASSOCIATEDATTRIBUTEGROUPSREQUEST_H

#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAssociatedAttributeGroupsRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT ListAssociatedAttributeGroupsRequest : public ServiceCatalogAppRegistryRequest {

public:
    ListAssociatedAttributeGroupsRequest(const ListAssociatedAttributeGroupsRequest &other);
    ListAssociatedAttributeGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociatedAttributeGroupsRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
