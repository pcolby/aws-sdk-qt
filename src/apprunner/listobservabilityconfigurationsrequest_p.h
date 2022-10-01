// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBSERVABILITYCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTOBSERVABILITYCONFIGURATIONSREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "listobservabilityconfigurationsrequest.h"

namespace QtAws {
namespace AppRunner {

class ListObservabilityConfigurationsRequest;

class ListObservabilityConfigurationsRequestPrivate : public AppRunnerRequestPrivate {

public:
    ListObservabilityConfigurationsRequestPrivate(const AppRunnerRequest::Action action,
                                   ListObservabilityConfigurationsRequest * const q);
    ListObservabilityConfigurationsRequestPrivate(const ListObservabilityConfigurationsRequestPrivate &other,
                                   ListObservabilityConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListObservabilityConfigurationsRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
