// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPHONENUMBERREQUEST_P_H
#define QTAWS_DESCRIBEPHONENUMBERREQUEST_P_H

#include "connectrequest_p.h"
#include "describephonenumberrequest.h"

namespace QtAws {
namespace Connect {

class DescribePhoneNumberRequest;

class DescribePhoneNumberRequestPrivate : public ConnectRequestPrivate {

public:
    DescribePhoneNumberRequestPrivate(const ConnectRequest::Action action,
                                   DescribePhoneNumberRequest * const q);
    DescribePhoneNumberRequestPrivate(const DescribePhoneNumberRequestPrivate &other,
                                   DescribePhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePhoneNumberRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
