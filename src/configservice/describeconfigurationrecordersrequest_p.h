// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONRECORDERSREQUEST_P_H
#define QTAWS_DESCRIBECONFIGURATIONRECORDERSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeconfigurationrecordersrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationRecordersRequest;

class DescribeConfigurationRecordersRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeConfigurationRecordersRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeConfigurationRecordersRequest * const q);
    DescribeConfigurationRecordersRequestPrivate(const DescribeConfigurationRecordersRequestPrivate &other,
                                   DescribeConfigurationRecordersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationRecordersRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
