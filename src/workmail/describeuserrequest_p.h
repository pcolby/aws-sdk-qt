// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERREQUEST_P_H
#define QTAWS_DESCRIBEUSERREQUEST_P_H

#include "workmailrequest_p.h"
#include "describeuserrequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeUserRequest;

class DescribeUserRequestPrivate : public WorkMailRequestPrivate {

public:
    DescribeUserRequestPrivate(const WorkMailRequest::Action action,
                                   DescribeUserRequest * const q);
    DescribeUserRequestPrivate(const DescribeUserRequestPrivate &other,
                                   DescribeUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUserRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
