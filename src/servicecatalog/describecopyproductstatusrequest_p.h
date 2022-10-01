// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOPYPRODUCTSTATUSREQUEST_P_H
#define QTAWS_DESCRIBECOPYPRODUCTSTATUSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describecopyproductstatusrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeCopyProductStatusRequest;

class DescribeCopyProductStatusRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribeCopyProductStatusRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribeCopyProductStatusRequest * const q);
    DescribeCopyProductStatusRequestPrivate(const DescribeCopyProductStatusRequestPrivate &other,
                                   DescribeCopyProductStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCopyProductStatusRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
