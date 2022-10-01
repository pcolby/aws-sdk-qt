// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTTRACKERREQUEST_P_H
#define QTAWS_DESCRIBEEVENTTRACKERREQUEST_P_H

#include "personalizerequest_p.h"
#include "describeeventtrackerrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeEventTrackerRequest;

class DescribeEventTrackerRequestPrivate : public PersonalizeRequestPrivate {

public:
    DescribeEventTrackerRequestPrivate(const PersonalizeRequest::Action action,
                                   DescribeEventTrackerRequest * const q);
    DescribeEventTrackerRequestPrivate(const DescribeEventTrackerRequestPrivate &other,
                                   DescribeEventTrackerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventTrackerRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
