// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSUMMARYREQUEST_P_H
#define QTAWS_DESCRIBESTACKSUMMARYREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describestacksummaryrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeStackSummaryRequest;

class DescribeStackSummaryRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeStackSummaryRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeStackSummaryRequest * const q);
    DescribeStackSummaryRequestPrivate(const DescribeStackSummaryRequestPrivate &other,
                                   DescribeStackSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStackSummaryRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
