// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONSTRAINTREQUEST_P_H
#define QTAWS_DESCRIBECONSTRAINTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describeconstraintrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeConstraintRequest;

class DescribeConstraintRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribeConstraintRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribeConstraintRequest * const q);
    DescribeConstraintRequestPrivate(const DescribeConstraintRequestPrivate &other,
                                   DescribeConstraintRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConstraintRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
