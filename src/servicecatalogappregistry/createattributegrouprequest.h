// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEATTRIBUTEGROUPREQUEST_H
#define QTAWS_CREATEATTRIBUTEGROUPREQUEST_H

#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class CreateAttributeGroupRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT CreateAttributeGroupRequest : public ServiceCatalogAppRegistryRequest {

public:
    CreateAttributeGroupRequest(const CreateAttributeGroupRequest &other);
    CreateAttributeGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAttributeGroupRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
