// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERMAILDOMAINREQUEST_P_H
#define QTAWS_REGISTERMAILDOMAINREQUEST_P_H

#include "workmailrequest_p.h"
#include "registermaildomainrequest.h"

namespace QtAws {
namespace WorkMail {

class RegisterMailDomainRequest;

class RegisterMailDomainRequestPrivate : public WorkMailRequestPrivate {

public:
    RegisterMailDomainRequestPrivate(const WorkMailRequest::Action action,
                                   RegisterMailDomainRequest * const q);
    RegisterMailDomainRequestPrivate(const RegisterMailDomainRequestPrivate &other,
                                   RegisterMailDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterMailDomainRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
