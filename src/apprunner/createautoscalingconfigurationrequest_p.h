// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOSCALINGCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEAUTOSCALINGCONFIGURATIONREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "createautoscalingconfigurationrequest.h"

namespace QtAws {
namespace AppRunner {

class CreateAutoScalingConfigurationRequest;

class CreateAutoScalingConfigurationRequestPrivate : public AppRunnerRequestPrivate {

public:
    CreateAutoScalingConfigurationRequestPrivate(const AppRunnerRequest::Action action,
                                   CreateAutoScalingConfigurationRequest * const q);
    CreateAutoScalingConfigurationRequestPrivate(const CreateAutoScalingConfigurationRequestPrivate &other,
                                   CreateAutoScalingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAutoScalingConfigurationRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
