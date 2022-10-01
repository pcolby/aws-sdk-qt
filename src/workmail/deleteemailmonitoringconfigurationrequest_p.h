// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILMONITORINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEEMAILMONITORINGCONFIGURATIONREQUEST_P_H

#include "workmailrequest_p.h"
#include "deleteemailmonitoringconfigurationrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteEmailMonitoringConfigurationRequest;

class DeleteEmailMonitoringConfigurationRequestPrivate : public WorkMailRequestPrivate {

public:
    DeleteEmailMonitoringConfigurationRequestPrivate(const WorkMailRequest::Action action,
                                   DeleteEmailMonitoringConfigurationRequest * const q);
    DeleteEmailMonitoringConfigurationRequestPrivate(const DeleteEmailMonitoringConfigurationRequestPrivate &other,
                                   DeleteEmailMonitoringConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEmailMonitoringConfigurationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
