// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEATTRIBUTEGROUPREQUEST_H
#define QTAWS_DISASSOCIATEATTRIBUTEGROUPREQUEST_H

#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class DisassociateAttributeGroupRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT DisassociateAttributeGroupRequest : public ServiceCatalogAppRegistryRequest {

public:
    DisassociateAttributeGroupRequest(const DisassociateAttributeGroupRequest &other);
    DisassociateAttributeGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateAttributeGroupRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
