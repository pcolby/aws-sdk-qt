// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONRECORDERSTATUSREQUEST_P_H
#define QTAWS_DESCRIBECONFIGURATIONRECORDERSTATUSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeconfigurationrecorderstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationRecorderStatusRequest;

class DescribeConfigurationRecorderStatusRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeConfigurationRecorderStatusRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeConfigurationRecorderStatusRequest * const q);
    DescribeConfigurationRecorderStatusRequestPrivate(const DescribeConfigurationRecorderStatusRequestPrivate &other,
                                   DescribeConfigurationRecorderStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationRecorderStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
