// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILMONITORINGCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTEMAILMONITORINGCONFIGURATIONREQUEST_P_H

#include "workmailrequest_p.h"
#include "putemailmonitoringconfigurationrequest.h"

namespace QtAws {
namespace WorkMail {

class PutEmailMonitoringConfigurationRequest;

class PutEmailMonitoringConfigurationRequestPrivate : public WorkMailRequestPrivate {

public:
    PutEmailMonitoringConfigurationRequestPrivate(const WorkMailRequest::Action action,
                                   PutEmailMonitoringConfigurationRequest * const q);
    PutEmailMonitoringConfigurationRequestPrivate(const PutEmailMonitoringConfigurationRequestPrivate &other,
                                   PutEmailMonitoringConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEmailMonitoringConfigurationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
