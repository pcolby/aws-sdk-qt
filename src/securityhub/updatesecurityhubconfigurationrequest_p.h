// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYHUBCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATESECURITYHUBCONFIGURATIONREQUEST_P_H

#include "securityhubrequest_p.h"
#include "updatesecurityhubconfigurationrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateSecurityHubConfigurationRequest;

class UpdateSecurityHubConfigurationRequestPrivate : public SecurityHubRequestPrivate {

public:
    UpdateSecurityHubConfigurationRequestPrivate(const SecurityHubRequest::Action action,
                                   UpdateSecurityHubConfigurationRequest * const q);
    UpdateSecurityHubConfigurationRequestPrivate(const UpdateSecurityHubConfigurationRequestPrivate &other,
                                   UpdateSecurityHubConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSecurityHubConfigurationRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
