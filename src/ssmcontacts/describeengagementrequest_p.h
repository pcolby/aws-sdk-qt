// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGAGEMENTREQUEST_P_H
#define QTAWS_DESCRIBEENGAGEMENTREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "describeengagementrequest.h"

namespace QtAws {
namespace SsmContacts {

class DescribeEngagementRequest;

class DescribeEngagementRequestPrivate : public SsmContactsRequestPrivate {

public:
    DescribeEngagementRequestPrivate(const SsmContactsRequest::Action action,
                                   DescribeEngagementRequest * const q);
    DescribeEngagementRequestPrivate(const DescribeEngagementRequestPrivate &other,
                                   DescribeEngagementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEngagementRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
