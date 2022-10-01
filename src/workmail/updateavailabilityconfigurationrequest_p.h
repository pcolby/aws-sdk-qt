// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAVAILABILITYCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEAVAILABILITYCONFIGURATIONREQUEST_P_H

#include "workmailrequest_p.h"
#include "updateavailabilityconfigurationrequest.h"

namespace QtAws {
namespace WorkMail {

class UpdateAvailabilityConfigurationRequest;

class UpdateAvailabilityConfigurationRequestPrivate : public WorkMailRequestPrivate {

public:
    UpdateAvailabilityConfigurationRequestPrivate(const WorkMailRequest::Action action,
                                   UpdateAvailabilityConfigurationRequest * const q);
    UpdateAvailabilityConfigurationRequestPrivate(const UpdateAvailabilityConfigurationRequestPrivate &other,
                                   UpdateAvailabilityConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAvailabilityConfigurationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
