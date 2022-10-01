// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEATTRIBUTEGROUPREQUEST_P_H
#define QTAWS_DISASSOCIATEATTRIBUTEGROUPREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "disassociateattributegrouprequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class DisassociateAttributeGroupRequest;

class DisassociateAttributeGroupRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    DisassociateAttributeGroupRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   DisassociateAttributeGroupRequest * const q);
    DisassociateAttributeGroupRequestPrivate(const DisassociateAttributeGroupRequestPrivate &other,
                                   DisassociateAttributeGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateAttributeGroupRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
