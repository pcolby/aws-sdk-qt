// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTCONFIGURATIONSREQUEST_P_H
#define QTAWS_DESCRIBEEVENTCONFIGURATIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "describeeventconfigurationsrequest.h"

namespace QtAws {
namespace IoT {

class DescribeEventConfigurationsRequest;

class DescribeEventConfigurationsRequestPrivate : public IoTRequestPrivate {

public:
    DescribeEventConfigurationsRequestPrivate(const IoTRequest::Action action,
                                   DescribeEventConfigurationsRequest * const q);
    DescribeEventConfigurationsRequestPrivate(const DescribeEventConfigurationsRequestPrivate &other,
                                   DescribeEventConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventConfigurationsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
