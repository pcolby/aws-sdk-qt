// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECUSTOMDOMAINREQUEST_P_H
#define QTAWS_ASSOCIATECUSTOMDOMAINREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "associatecustomdomainrequest.h"

namespace QtAws {
namespace AppRunner {

class AssociateCustomDomainRequest;

class AssociateCustomDomainRequestPrivate : public AppRunnerRequestPrivate {

public:
    AssociateCustomDomainRequestPrivate(const AppRunnerRequest::Action action,
                                   AssociateCustomDomainRequest * const q);
    AssociateCustomDomainRequestPrivate(const AssociateCustomDomainRequestPrivate &other,
                                   AssociateCustomDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateCustomDomainRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
