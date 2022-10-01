// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUEUEREQUEST_P_H
#define QTAWS_DESCRIBEQUEUEREQUEST_P_H

#include "connectrequest_p.h"
#include "describequeuerequest.h"

namespace QtAws {
namespace Connect {

class DescribeQueueRequest;

class DescribeQueueRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeQueueRequestPrivate(const ConnectRequest::Action action,
                                   DescribeQueueRequest * const q);
    DescribeQueueRequestPrivate(const DescribeQueueRequestPrivate &other,
                                   DescribeQueueRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeQueueRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
