// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBREQUEST_P_H
#define QTAWS_DESCRIBEJOBREQUEST_P_H

#include "glacierrequest_p.h"
#include "describejobrequest.h"

namespace QtAws {
namespace Glacier {

class DescribeJobRequest;

class DescribeJobRequestPrivate : public GlacierRequestPrivate {

public:
    DescribeJobRequestPrivate(const GlacierRequest::Action action,
                                   DescribeJobRequest * const q);
    DescribeJobRequestPrivate(const DescribeJobRequestPrivate &other,
                                   DescribeJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeJobRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
