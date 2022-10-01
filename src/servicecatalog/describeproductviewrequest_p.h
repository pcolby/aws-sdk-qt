// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTVIEWREQUEST_P_H
#define QTAWS_DESCRIBEPRODUCTVIEWREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describeproductviewrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProductViewRequest;

class DescribeProductViewRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribeProductViewRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribeProductViewRequest * const q);
    DescribeProductViewRequestPrivate(const DescribeProductViewRequestPrivate &other,
                                   DescribeProductViewRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProductViewRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
