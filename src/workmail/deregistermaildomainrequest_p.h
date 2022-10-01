// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERMAILDOMAINREQUEST_P_H
#define QTAWS_DEREGISTERMAILDOMAINREQUEST_P_H

#include "workmailrequest_p.h"
#include "deregistermaildomainrequest.h"

namespace QtAws {
namespace WorkMail {

class DeregisterMailDomainRequest;

class DeregisterMailDomainRequestPrivate : public WorkMailRequestPrivate {

public:
    DeregisterMailDomainRequestPrivate(const WorkMailRequest::Action action,
                                   DeregisterMailDomainRequest * const q);
    DeregisterMailDomainRequestPrivate(const DeregisterMailDomainRequestPrivate &other,
                                   DeregisterMailDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterMailDomainRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
