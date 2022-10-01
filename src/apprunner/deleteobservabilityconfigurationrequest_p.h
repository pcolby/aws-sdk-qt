// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBSERVABILITYCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEOBSERVABILITYCONFIGURATIONREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "deleteobservabilityconfigurationrequest.h"

namespace QtAws {
namespace AppRunner {

class DeleteObservabilityConfigurationRequest;

class DeleteObservabilityConfigurationRequestPrivate : public AppRunnerRequestPrivate {

public:
    DeleteObservabilityConfigurationRequestPrivate(const AppRunnerRequest::Action action,
                                   DeleteObservabilityConfigurationRequest * const q);
    DeleteObservabilityConfigurationRequestPrivate(const DeleteObservabilityConfigurationRequestPrivate &other,
                                   DeleteObservabilityConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteObservabilityConfigurationRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
