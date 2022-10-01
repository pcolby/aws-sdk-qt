// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEACTIONSREQUEST_P_H
#define QTAWS_LISTSERVICEACTIONSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listserviceactionsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListServiceActionsRequest;

class ListServiceActionsRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListServiceActionsRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListServiceActionsRequest * const q);
    ListServiceActionsRequestPrivate(const ListServiceActionsRequestPrivate &other,
                                   ListServiceActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServiceActionsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
