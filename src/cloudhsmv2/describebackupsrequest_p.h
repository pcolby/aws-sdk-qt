// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPSREQUEST_P_H
#define QTAWS_DESCRIBEBACKUPSREQUEST_P_H

#include "cloudhsmv2request_p.h"
#include "describebackupsrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class DescribeBackupsRequest;

class DescribeBackupsRequestPrivate : public CloudHsmV2RequestPrivate {

public:
    DescribeBackupsRequestPrivate(const CloudHsmV2Request::Action action,
                                   DescribeBackupsRequest * const q);
    DescribeBackupsRequestPrivate(const DescribeBackupsRequestPrivate &other,
                                   DescribeBackupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBackupsRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
