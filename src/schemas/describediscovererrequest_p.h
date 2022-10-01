// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDISCOVERERREQUEST_P_H
#define QTAWS_DESCRIBEDISCOVERERREQUEST_P_H

#include "schemasrequest_p.h"
#include "describediscovererrequest.h"

namespace QtAws {
namespace Schemas {

class DescribeDiscovererRequest;

class DescribeDiscovererRequestPrivate : public SchemasRequestPrivate {

public:
    DescribeDiscovererRequestPrivate(const SchemasRequest::Action action,
                                   DescribeDiscovererRequest * const q);
    DescribeDiscovererRequestPrivate(const DescribeDiscovererRequestPrivate &other,
                                   DescribeDiscovererRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDiscovererRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
