// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESECURITYHUBREQUEST_P_H
#define QTAWS_DISABLESECURITYHUBREQUEST_P_H

#include "securityhubrequest_p.h"
#include "disablesecurityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DisableSecurityHubRequest;

class DisableSecurityHubRequestPrivate : public SecurityHubRequestPrivate {

public:
    DisableSecurityHubRequestPrivate(const SecurityHubRequest::Action action,
                                   DisableSecurityHubRequest * const q);
    DisableSecurityHubRequestPrivate(const DisableSecurityHubRequestPrivate &other,
                                   DisableSecurityHubRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableSecurityHubRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
