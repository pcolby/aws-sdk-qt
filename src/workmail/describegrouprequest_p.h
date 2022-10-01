// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPREQUEST_P_H
#define QTAWS_DESCRIBEGROUPREQUEST_P_H

#include "workmailrequest_p.h"
#include "describegrouprequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeGroupRequest;

class DescribeGroupRequestPrivate : public WorkMailRequestPrivate {

public:
    DescribeGroupRequestPrivate(const WorkMailRequest::Action action,
                                   DescribeGroupRequest * const q);
    DescribeGroupRequestPrivate(const DescribeGroupRequestPrivate &other,
                                   DescribeGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGroupRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
