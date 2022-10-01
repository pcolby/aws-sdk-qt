// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEACTIONREQUEST_P_H
#define QTAWS_DESCRIBESERVICEACTIONREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "describeserviceactionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeServiceActionRequest;

class DescribeServiceActionRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DescribeServiceActionRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DescribeServiceActionRequest * const q);
    DescribeServiceActionRequestPrivate(const DescribeServiceActionRequestPrivate &other,
                                   DescribeServiceActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeServiceActionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
