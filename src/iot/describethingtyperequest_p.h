// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGTYPEREQUEST_P_H
#define QTAWS_DESCRIBETHINGTYPEREQUEST_P_H

#include "iotrequest_p.h"
#include "describethingtyperequest.h"

namespace QtAws {
namespace IoT {

class DescribeThingTypeRequest;

class DescribeThingTypeRequestPrivate : public IoTRequestPrivate {

public:
    DescribeThingTypeRequestPrivate(const IoTRequest::Action action,
                                   DescribeThingTypeRequest * const q);
    DescribeThingTypeRequestPrivate(const DescribeThingTypeRequestPrivate &other,
                                   DescribeThingTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeThingTypeRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
