// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTRIBUTEGROUPREQUEST_H
#define QTAWS_DELETEATTRIBUTEGROUPREQUEST_H

#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class DeleteAttributeGroupRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT DeleteAttributeGroupRequest : public ServiceCatalogAppRegistryRequest {

public:
    DeleteAttributeGroupRequest(const DeleteAttributeGroupRequest &other);
    DeleteAttributeGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAttributeGroupRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
