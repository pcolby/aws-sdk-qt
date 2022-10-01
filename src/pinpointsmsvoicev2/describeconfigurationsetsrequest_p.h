// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSETSREQUEST_P_H
#define QTAWS_DESCRIBECONFIGURATIONSETSREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "describeconfigurationsetsrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeConfigurationSetsRequest;

class DescribeConfigurationSetsRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DescribeConfigurationSetsRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DescribeConfigurationSetsRequest * const q);
    DescribeConfigurationSetsRequestPrivate(const DescribeConfigurationSetsRequestPrivate &other,
                                   DescribeConfigurationSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationSetsRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
