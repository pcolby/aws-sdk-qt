// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREMEDIATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEREMEDIATIONCONFIGURATIONREQUEST_P_H

#include "configservicerequest_p.h"
#include "deleteremediationconfigurationrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteRemediationConfigurationRequest;

class DeleteRemediationConfigurationRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeleteRemediationConfigurationRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeleteRemediationConfigurationRequest * const q);
    DeleteRemediationConfigurationRequestPrivate(const DeleteRemediationConfigurationRequestPrivate &other,
                                   DeleteRemediationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRemediationConfigurationRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
