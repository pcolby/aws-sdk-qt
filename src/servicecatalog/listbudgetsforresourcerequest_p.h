// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUDGETSFORRESOURCEREQUEST_P_H
#define QTAWS_LISTBUDGETSFORRESOURCEREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listbudgetsforresourcerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListBudgetsForResourceRequest;

class ListBudgetsForResourceRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListBudgetsForResourceRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListBudgetsForResourceRequest * const q);
    ListBudgetsForResourceRequestPrivate(const ListBudgetsForResourceRequestPrivate &other,
                                   ListBudgetsForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBudgetsForResourceRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
