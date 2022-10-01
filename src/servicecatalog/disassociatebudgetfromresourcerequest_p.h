// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEBUDGETFROMRESOURCEREQUEST_P_H
#define QTAWS_DISASSOCIATEBUDGETFROMRESOURCEREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "disassociatebudgetfromresourcerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateBudgetFromResourceRequest;

class DisassociateBudgetFromResourceRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DisassociateBudgetFromResourceRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DisassociateBudgetFromResourceRequest * const q);
    DisassociateBudgetFromResourceRequestPrivate(const DisassociateBudgetFromResourceRequestPrivate &other,
                                   DisassociateBudgetFromResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateBudgetFromResourceRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
