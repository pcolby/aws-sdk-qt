// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTAVAILABILITYCONFIGURATIONREQUEST_P_H
#define QTAWS_TESTAVAILABILITYCONFIGURATIONREQUEST_P_H

#include "workmailrequest_p.h"
#include "testavailabilityconfigurationrequest.h"

namespace QtAws {
namespace WorkMail {

class TestAvailabilityConfigurationRequest;

class TestAvailabilityConfigurationRequestPrivate : public WorkMailRequestPrivate {

public:
    TestAvailabilityConfigurationRequestPrivate(const WorkMailRequest::Action action,
                                   TestAvailabilityConfigurationRequest * const q);
    TestAvailabilityConfigurationRequestPrivate(const TestAvailabilityConfigurationRequestPrivate &other,
                                   TestAvailabilityConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestAvailabilityConfigurationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
