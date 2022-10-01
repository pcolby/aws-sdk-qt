// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESECURITYHUBREQUEST_P_H
#define QTAWS_ENABLESECURITYHUBREQUEST_P_H

#include "securityhubrequest_p.h"
#include "enablesecurityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class EnableSecurityHubRequest;

class EnableSecurityHubRequestPrivate : public SecurityHubRequestPrivate {

public:
    EnableSecurityHubRequestPrivate(const SecurityHubRequest::Action action,
                                   EnableSecurityHubRequest * const q);
    EnableSecurityHubRequestPrivate(const EnableSecurityHubRequestPrivate &other,
                                   EnableSecurityHubRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableSecurityHubRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
