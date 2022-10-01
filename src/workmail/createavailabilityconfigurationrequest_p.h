// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAVAILABILITYCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEAVAILABILITYCONFIGURATIONREQUEST_P_H

#include "workmailrequest_p.h"
#include "createavailabilityconfigurationrequest.h"

namespace QtAws {
namespace WorkMail {

class CreateAvailabilityConfigurationRequest;

class CreateAvailabilityConfigurationRequestPrivate : public WorkMailRequestPrivate {

public:
    CreateAvailabilityConfigurationRequestPrivate(const WorkMailRequest::Action action,
                                   CreateAvailabilityConfigurationRequest * const q);
    CreateAvailabilityConfigurationRequestPrivate(const CreateAvailabilityConfigurationRequestPrivate &other,
                                   CreateAvailabilityConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAvailabilityConfigurationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
