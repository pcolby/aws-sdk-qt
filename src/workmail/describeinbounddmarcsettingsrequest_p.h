// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINBOUNDDMARCSETTINGSREQUEST_P_H
#define QTAWS_DESCRIBEINBOUNDDMARCSETTINGSREQUEST_P_H

#include "workmailrequest_p.h"
#include "describeinbounddmarcsettingsrequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeInboundDmarcSettingsRequest;

class DescribeInboundDmarcSettingsRequestPrivate : public WorkMailRequestPrivate {

public:
    DescribeInboundDmarcSettingsRequestPrivate(const WorkMailRequest::Action action,
                                   DescribeInboundDmarcSettingsRequest * const q);
    DescribeInboundDmarcSettingsRequestPrivate(const DescribeInboundDmarcSettingsRequestPrivate &other,
                                   DescribeInboundDmarcSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInboundDmarcSettingsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
