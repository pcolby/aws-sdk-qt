// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPSREQUEST_P_H
#define QTAWS_DESCRIBEBACKUPSREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "describebackupsrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DescribeBackupsRequest;

class DescribeBackupsRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    DescribeBackupsRequestPrivate(const OpsWorksCmRequest::Action action,
                                   DescribeBackupsRequest * const q);
    DescribeBackupsRequestPrivate(const DescribeBackupsRequestPrivate &other,
                                   DescribeBackupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBackupsRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
