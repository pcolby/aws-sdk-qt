// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONSUBSCRIPTIONSREQUEST_P_H
#define QTAWS_DESCRIBENOTIFICATIONSUBSCRIPTIONSREQUEST_P_H

#include "workdocsrequest_p.h"
#include "describenotificationsubscriptionsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeNotificationSubscriptionsRequest;

class DescribeNotificationSubscriptionsRequestPrivate : public WorkDocsRequestPrivate {

public:
    DescribeNotificationSubscriptionsRequestPrivate(const WorkDocsRequest::Action action,
                                   DescribeNotificationSubscriptionsRequest * const q);
    DescribeNotificationSubscriptionsRequestPrivate(const DescribeNotificationSubscriptionsRequestPrivate &other,
                                   DescribeNotificationSubscriptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNotificationSubscriptionsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
