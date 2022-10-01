// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOBSERVABILITYCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEOBSERVABILITYCONFIGURATIONREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "createobservabilityconfigurationrequest.h"

namespace QtAws {
namespace AppRunner {

class CreateObservabilityConfigurationRequest;

class CreateObservabilityConfigurationRequestPrivate : public AppRunnerRequestPrivate {

public:
    CreateObservabilityConfigurationRequestPrivate(const AppRunnerRequest::Action action,
                                   CreateObservabilityConfigurationRequest * const q);
    CreateObservabilityConfigurationRequestPrivate(const CreateObservabilityConfigurationRequestPrivate &other,
                                   CreateObservabilityConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateObservabilityConfigurationRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
