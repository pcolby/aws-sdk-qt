// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAVAILABILITYCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEAVAILABILITYCONFIGURATIONREQUEST_P_H

#include "workmailrequest_p.h"
#include "deleteavailabilityconfigurationrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteAvailabilityConfigurationRequest;

class DeleteAvailabilityConfigurationRequestPrivate : public WorkMailRequestPrivate {

public:
    DeleteAvailabilityConfigurationRequestPrivate(const WorkMailRequest::Action action,
                                   DeleteAvailabilityConfigurationRequest * const q);
    DeleteAvailabilityConfigurationRequestPrivate(const DeleteAvailabilityConfigurationRequestPrivate &other,
                                   DeleteAvailabilityConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAvailabilityConfigurationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
