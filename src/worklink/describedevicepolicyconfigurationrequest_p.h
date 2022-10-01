// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEPOLICYCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEDEVICEPOLICYCONFIGURATIONREQUEST_P_H

#include "worklinkrequest_p.h"
#include "describedevicepolicyconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeDevicePolicyConfigurationRequest;

class DescribeDevicePolicyConfigurationRequestPrivate : public WorkLinkRequestPrivate {

public:
    DescribeDevicePolicyConfigurationRequestPrivate(const WorkLinkRequest::Action action,
                                   DescribeDevicePolicyConfigurationRequest * const q);
    DescribeDevicePolicyConfigurationRequestPrivate(const DescribeDevicePolicyConfigurationRequestPrivate &other,
                                   DescribeDevicePolicyConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDevicePolicyConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
