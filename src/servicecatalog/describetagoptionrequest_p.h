// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGOPTIONREQUEST_P_H
#define QTAWS_DESCRIBETAGOPTIONREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describetagoptionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeTagOptionRequest;

class DescribeTagOptionRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribeTagOptionRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribeTagOptionRequest * const q);
    DescribeTagOptionRequestPrivate(const DescribeTagOptionRequestPrivate &other,
                                   DescribeTagOptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTagOptionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
