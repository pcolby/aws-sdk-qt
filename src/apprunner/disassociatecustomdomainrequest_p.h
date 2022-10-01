// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECUSTOMDOMAINREQUEST_P_H
#define QTAWS_DISASSOCIATECUSTOMDOMAINREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "disassociatecustomdomainrequest.h"

namespace QtAws {
namespace AppRunner {

class DisassociateCustomDomainRequest;

class DisassociateCustomDomainRequestPrivate : public AppRunnerRequestPrivate {

public:
    DisassociateCustomDomainRequestPrivate(const AppRunnerRequest::Action action,
                                   DisassociateCustomDomainRequest * const q);
    DisassociateCustomDomainRequestPrivate(const DisassociateCustomDomainRequestPrivate &other,
                                   DisassociateCustomDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateCustomDomainRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
