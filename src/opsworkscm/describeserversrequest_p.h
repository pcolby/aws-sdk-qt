// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVERSREQUEST_P_H
#define QTAWS_DESCRIBESERVERSREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "describeserversrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DescribeServersRequest;

class DescribeServersRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    DescribeServersRequestPrivate(const OpsWorksCmRequest::Action action,
                                   DescribeServersRequest * const q);
    DescribeServersRequestPrivate(const DescribeServersRequestPrivate &other,
                                   DescribeServersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeServersRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
