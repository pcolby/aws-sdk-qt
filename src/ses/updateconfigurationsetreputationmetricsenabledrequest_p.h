// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETREPUTATIONMETRICSENABLEDREQUEST_P_H
#define QTAWS_UPDATECONFIGURATIONSETREPUTATIONMETRICSENABLEDREQUEST_P_H

#include "sesrequest_p.h"
#include "updateconfigurationsetreputationmetricsenabledrequest.h"

namespace QtAws {
namespace Ses {

class UpdateConfigurationSetReputationMetricsEnabledRequest;

class UpdateConfigurationSetReputationMetricsEnabledRequestPrivate : public SesRequestPrivate {

public:
    UpdateConfigurationSetReputationMetricsEnabledRequestPrivate(const SesRequest::Action action,
                                   UpdateConfigurationSetReputationMetricsEnabledRequest * const q);
    UpdateConfigurationSetReputationMetricsEnabledRequestPrivate(const UpdateConfigurationSetReputationMetricsEnabledRequestPrivate &other,
                                   UpdateConfigurationSetReputationMetricsEnabledRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationSetReputationMetricsEnabledRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
