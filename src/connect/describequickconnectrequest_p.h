// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUICKCONNECTREQUEST_P_H
#define QTAWS_DESCRIBEQUICKCONNECTREQUEST_P_H

#include "connectrequest_p.h"
#include "describequickconnectrequest.h"

namespace QtAws {
namespace Connect {

class DescribeQuickConnectRequest;

class DescribeQuickConnectRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeQuickConnectRequestPrivate(const ConnectRequest::Action action,
                                   DescribeQuickConnectRequest * const q);
    DescribeQuickConnectRequestPrivate(const DescribeQuickConnectRequestPrivate &other,
                                   DescribeQuickConnectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeQuickConnectRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
