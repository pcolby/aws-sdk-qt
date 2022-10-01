// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOURCEREQUEST_P_H
#define QTAWS_DISASSOCIATERESOURCEREQUEST_P_H

#include "servicecatalogappregistryrequest_p.h"
#include "disassociateresourcerequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class DisassociateResourceRequest;

class DisassociateResourceRequestPrivate : public ServiceCatalogAppRegistryRequestPrivate {

public:
    DisassociateResourceRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action,
                                   DisassociateResourceRequest * const q);
    DisassociateResourceRequestPrivate(const DisassociateResourceRequestPrivate &other,
                                   DisassociateResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateResourceRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
