// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTREQUEST_P_H
#define QTAWS_DESCRIBEPRODUCTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describeproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProductRequest;

class DescribeProductRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribeProductRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribeProductRequest * const q);
    DescribeProductRequestPrivate(const DescribeProductRequestPrivate &other,
                                   DescribeProductRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProductRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
