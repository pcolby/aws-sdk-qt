// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITSTREAMCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEAUDITSTREAMCONFIGURATIONREQUEST_P_H

#include "worklinkrequest_p.h"
#include "describeauditstreamconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeAuditStreamConfigurationRequest;

class DescribeAuditStreamConfigurationRequestPrivate : public WorkLinkRequestPrivate {

public:
    DescribeAuditStreamConfigurationRequestPrivate(const WorkLinkRequest::Action action,
                                   DescribeAuditStreamConfigurationRequest * const q);
    DescribeAuditStreamConfigurationRequestPrivate(const DescribeAuditStreamConfigurationRequestPrivate &other,
                                   DescribeAuditStreamConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAuditStreamConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
