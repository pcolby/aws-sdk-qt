// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTACTREQUEST_P_H
#define QTAWS_DESCRIBECONTACTREQUEST_P_H

#include "connectrequest_p.h"
#include "describecontactrequest.h"

namespace QtAws {
namespace Connect {

class DescribeContactRequest;

class DescribeContactRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeContactRequestPrivate(const ConnectRequest::Action action,
                                   DescribeContactRequest * const q);
    DescribeContactRequestPrivate(const DescribeContactRequestPrivate &other,
                                   DescribeContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeContactRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
