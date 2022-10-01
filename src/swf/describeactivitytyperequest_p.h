// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVITYTYPEREQUEST_P_H
#define QTAWS_DESCRIBEACTIVITYTYPEREQUEST_P_H

#include "swfrequest_p.h"
#include "describeactivitytyperequest.h"

namespace QtAws {
namespace Swf {

class DescribeActivityTypeRequest;

class DescribeActivityTypeRequestPrivate : public SwfRequestPrivate {

public:
    DescribeActivityTypeRequestPrivate(const SwfRequest::Action action,
                                   DescribeActivityTypeRequest * const q);
    DescribeActivityTypeRequestPrivate(const DescribeActivityTypeRequestPrivate &other,
                                   DescribeActivityTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeActivityTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
