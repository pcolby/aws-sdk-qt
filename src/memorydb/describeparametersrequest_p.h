// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBEPARAMETERSREQUEST_P_H

#include "memorydbrequest_p.h"
#include "describeparametersrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeParametersRequest;

class DescribeParametersRequestPrivate : public MemoryDbRequestPrivate {

public:
    DescribeParametersRequestPrivate(const MemoryDbRequest::Action action,
                                   DescribeParametersRequest * const q);
    DescribeParametersRequestPrivate(const DescribeParametersRequestPrivate &other,
                                   DescribeParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeParametersRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
