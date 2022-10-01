// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGISTRYREQUEST_P_H
#define QTAWS_DESCRIBEREGISTRYREQUEST_P_H

#include "schemasrequest_p.h"
#include "describeregistryrequest.h"

namespace QtAws {
namespace Schemas {

class DescribeRegistryRequest;

class DescribeRegistryRequestPrivate : public SchemasRequestPrivate {

public:
    DescribeRegistryRequestPrivate(const SchemasRequest::Action action,
                                   DescribeRegistryRequest * const q);
    DescribeRegistryRequestPrivate(const DescribeRegistryRequestPrivate &other,
                                   DescribeRegistryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRegistryRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
