// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSOURCESCONFIGREQUEST_P_H
#define QTAWS_DESCRIBEEVENTSOURCESCONFIGREQUEST_P_H

#include "devopsgururequest_p.h"
#include "describeeventsourcesconfigrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeEventSourcesConfigRequest;

class DescribeEventSourcesConfigRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    DescribeEventSourcesConfigRequestPrivate(const DevOpsGuruRequest::Action action,
                                   DescribeEventSourcesConfigRequest * const q);
    DescribeEventSourcesConfigRequestPrivate(const DescribeEventSourcesConfigRequestPrivate &other,
                                   DescribeEventSourcesConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventSourcesConfigRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
