// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEBUDGETWITHRESOURCEREQUEST_P_H
#define QTAWS_ASSOCIATEBUDGETWITHRESOURCEREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "associatebudgetwithresourcerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociateBudgetWithResourceRequest;

class AssociateBudgetWithResourceRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    AssociateBudgetWithResourceRequestPrivate(const ServiceCatalogRequest::Action action,
                                   AssociateBudgetWithResourceRequest * const q);
    AssociateBudgetWithResourceRequestPrivate(const AssociateBudgetWithResourceRequestPrivate &other,
                                   AssociateBudgetWithResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateBudgetWithResourceRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
