// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGISTRYREQUEST_P_H
#define QTAWS_DESCRIBEREGISTRYREQUEST_P_H

#include "ecrrequest_p.h"
#include "describeregistryrequest.h"

namespace QtAws {
namespace Ecr {

class DescribeRegistryRequest;

class DescribeRegistryRequestPrivate : public EcrRequestPrivate {

public:
    DescribeRegistryRequestPrivate(const EcrRequest::Action action,
                                   DescribeRegistryRequest * const q);
    DescribeRegistryRequestPrivate(const DescribeRegistryRequestPrivate &other,
                                   DescribeRegistryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRegistryRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
