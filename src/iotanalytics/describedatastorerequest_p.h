// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASTOREREQUEST_P_H
#define QTAWS_DESCRIBEDATASTOREREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "describedatastorerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DescribeDatastoreRequest;

class DescribeDatastoreRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    DescribeDatastoreRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   DescribeDatastoreRequest * const q);
    DescribeDatastoreRequestPrivate(const DescribeDatastoreRequestPrivate &other,
                                   DescribeDatastoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDatastoreRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
