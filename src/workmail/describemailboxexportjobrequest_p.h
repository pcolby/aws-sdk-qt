// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAILBOXEXPORTJOBREQUEST_P_H
#define QTAWS_DESCRIBEMAILBOXEXPORTJOBREQUEST_P_H

#include "workmailrequest_p.h"
#include "describemailboxexportjobrequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeMailboxExportJobRequest;

class DescribeMailboxExportJobRequestPrivate : public WorkMailRequestPrivate {

public:
    DescribeMailboxExportJobRequestPrivate(const WorkMailRequest::Action action,
                                   DescribeMailboxExportJobRequest * const q);
    DescribeMailboxExportJobRequestPrivate(const DescribeMailboxExportJobRequestPrivate &other,
                                   DescribeMailboxExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMailboxExportJobRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
