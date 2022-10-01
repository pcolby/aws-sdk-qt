// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETAGOPTIONWITHRESOURCEREQUEST_P_H
#define QTAWS_ASSOCIATETAGOPTIONWITHRESOURCEREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "associatetagoptionwithresourcerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociateTagOptionWithResourceRequest;

class AssociateTagOptionWithResourceRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    AssociateTagOptionWithResourceRequestPrivate(const ServiceCatalogRequest::Action action,
                                   AssociateTagOptionWithResourceRequest * const q);
    AssociateTagOptionWithResourceRequestPrivate(const AssociateTagOptionWithResourceRequestPrivate &other,
                                   AssociateTagOptionWithResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateTagOptionWithResourceRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
