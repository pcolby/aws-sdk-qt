// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYMAILFROMDOMAINREQUEST_P_H
#define QTAWS_SETIDENTITYMAILFROMDOMAINREQUEST_P_H

#include "sesrequest_p.h"
#include "setidentitymailfromdomainrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityMailFromDomainRequest;

class SetIdentityMailFromDomainRequestPrivate : public SesRequestPrivate {

public:
    SetIdentityMailFromDomainRequestPrivate(const SesRequest::Action action,
                                   SetIdentityMailFromDomainRequest * const q);
    SetIdentityMailFromDomainRequestPrivate(const SetIdentityMailFromDomainRequestPrivate &other,
                                   SetIdentityMailFromDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetIdentityMailFromDomainRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
