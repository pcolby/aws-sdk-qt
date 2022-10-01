// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPONENTCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATECOMPONENTCONFIGURATIONREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "updatecomponentconfigurationrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class UpdateComponentConfigurationRequest;

class UpdateComponentConfigurationRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    UpdateComponentConfigurationRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   UpdateComponentConfigurationRequest * const q);
    UpdateComponentConfigurationRequestPrivate(const UpdateComponentConfigurationRequestPrivate &other,
                                   UpdateComponentConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateComponentConfigurationRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
