// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTRIBUTEGROUPREQUEST_H
#define QTAWS_GETATTRIBUTEGROUPREQUEST_H

#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class GetAttributeGroupRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT GetAttributeGroupRequest : public ServiceCatalogAppRegistryRequest {

public:
    GetAttributeGroupRequest(const GetAttributeGroupRequest &other);
    GetAttributeGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAttributeGroupRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
