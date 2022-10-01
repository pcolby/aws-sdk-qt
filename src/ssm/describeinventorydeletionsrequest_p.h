// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINVENTORYDELETIONSREQUEST_P_H
#define QTAWS_DESCRIBEINVENTORYDELETIONSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeinventorydeletionsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeInventoryDeletionsRequest;

class DescribeInventoryDeletionsRequestPrivate : public SsmRequestPrivate {

public:
    DescribeInventoryDeletionsRequestPrivate(const SsmRequest::Action action,
                                   DescribeInventoryDeletionsRequest * const q);
    DescribeInventoryDeletionsRequestPrivate(const DescribeInventoryDeletionsRequestPrivate &other,
                                   DescribeInventoryDeletionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInventoryDeletionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
