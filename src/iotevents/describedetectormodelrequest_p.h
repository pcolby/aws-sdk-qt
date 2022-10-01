// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTORMODELREQUEST_P_H
#define QTAWS_DESCRIBEDETECTORMODELREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "describedetectormodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class DescribeDetectorModelRequest;

class DescribeDetectorModelRequestPrivate : public IoTEventsRequestPrivate {

public:
    DescribeDetectorModelRequestPrivate(const IoTEventsRequest::Action action,
                                   DescribeDetectorModelRequest * const q);
    DescribeDetectorModelRequestPrivate(const DescribeDetectorModelRequestPrivate &other,
                                   DescribeDetectorModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDetectorModelRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
