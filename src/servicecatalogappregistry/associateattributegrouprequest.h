// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEATTRIBUTEGROUPREQUEST_H
#define QTAWS_ASSOCIATEATTRIBUTEGROUPREQUEST_H

#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class AssociateAttributeGroupRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT AssociateAttributeGroupRequest : public ServiceCatalogAppRegistryRequest {

public:
    AssociateAttributeGroupRequest(const AssociateAttributeGroupRequest &other);
    AssociateAttributeGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateAttributeGroupRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
