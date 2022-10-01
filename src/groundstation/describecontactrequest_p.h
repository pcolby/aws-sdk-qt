// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTACTREQUEST_P_H
#define QTAWS_DESCRIBECONTACTREQUEST_P_H

#include "groundstationrequest_p.h"
#include "describecontactrequest.h"

namespace QtAws {
namespace GroundStation {

class DescribeContactRequest;

class DescribeContactRequestPrivate : public GroundStationRequestPrivate {

public:
    DescribeContactRequestPrivate(const GroundStationRequest::Action action,
                                   DescribeContactRequest * const q);
    DescribeContactRequestPrivate(const DescribeContactRequestPrivate &other,
                                   DescribeContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeContactRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
