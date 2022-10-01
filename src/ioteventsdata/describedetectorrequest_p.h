// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTORREQUEST_P_H
#define QTAWS_DESCRIBEDETECTORREQUEST_P_H

#include "ioteventsdatarequest_p.h"
#include "describedetectorrequest.h"

namespace QtAws {
namespace IoTEventsData {

class DescribeDetectorRequest;

class DescribeDetectorRequestPrivate : public IoTEventsDataRequestPrivate {

public:
    DescribeDetectorRequestPrivate(const IoTEventsDataRequest::Action action,
                                   DescribeDetectorRequest * const q);
    DescribeDetectorRequestPrivate(const DescribeDetectorRequestPrivate &other,
                                   DescribeDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDetectorRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
