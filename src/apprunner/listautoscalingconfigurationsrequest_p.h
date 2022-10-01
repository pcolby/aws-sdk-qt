// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUTOSCALINGCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTAUTOSCALINGCONFIGURATIONSREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "listautoscalingconfigurationsrequest.h"

namespace QtAws {
namespace AppRunner {

class ListAutoScalingConfigurationsRequest;

class ListAutoScalingConfigurationsRequestPrivate : public AppRunnerRequestPrivate {

public:
    ListAutoScalingConfigurationsRequestPrivate(const AppRunnerRequest::Action action,
                                   ListAutoScalingConfigurationsRequest * const q);
    ListAutoScalingConfigurationsRequestPrivate(const ListAutoScalingConfigurationsRequestPrivate &other,
                                   ListAutoScalingConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAutoScalingConfigurationsRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
