// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOSCALINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEAUTOSCALINGCONFIGURATIONREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "deleteautoscalingconfigurationrequest.h"

namespace QtAws {
namespace AppRunner {

class DeleteAutoScalingConfigurationRequest;

class DeleteAutoScalingConfigurationRequestPrivate : public AppRunnerRequestPrivate {

public:
    DeleteAutoScalingConfigurationRequestPrivate(const AppRunnerRequest::Action action,
                                   DeleteAutoScalingConfigurationRequest * const q);
    DeleteAutoScalingConfigurationRequestPrivate(const DeleteAutoScalingConfigurationRequestPrivate &other,
                                   DeleteAutoScalingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAutoScalingConfigurationRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
