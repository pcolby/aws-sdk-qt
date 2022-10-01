// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESFORTAGOPTIONREQUEST_P_H
#define QTAWS_LISTRESOURCESFORTAGOPTIONREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listresourcesfortagoptionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListResourcesForTagOptionRequest;

class ListResourcesForTagOptionRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListResourcesForTagOptionRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListResourcesForTagOptionRequest * const q);
    ListResourcesForTagOptionRequestPrivate(const ListResourcesForTagOptionRequestPrivate &other,
                                   ListResourcesForTagOptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourcesForTagOptionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
