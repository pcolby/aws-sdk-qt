// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOURSOFOPERATIONREQUEST_P_H
#define QTAWS_DESCRIBEHOURSOFOPERATIONREQUEST_P_H

#include "connectrequest_p.h"
#include "describehoursofoperationrequest.h"

namespace QtAws {
namespace Connect {

class DescribeHoursOfOperationRequest;

class DescribeHoursOfOperationRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeHoursOfOperationRequestPrivate(const ConnectRequest::Action action,
                                   DescribeHoursOfOperationRequest * const q);
    DescribeHoursOfOperationRequestPrivate(const DescribeHoursOfOperationRequestPrivate &other,
                                   DescribeHoursOfOperationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHoursOfOperationRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
