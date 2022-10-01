// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAILDOMAINREQUEST_P_H
#define QTAWS_GETMAILDOMAINREQUEST_P_H

#include "workmailrequest_p.h"
#include "getmaildomainrequest.h"

namespace QtAws {
namespace WorkMail {

class GetMailDomainRequest;

class GetMailDomainRequestPrivate : public WorkMailRequestPrivate {

public:
    GetMailDomainRequestPrivate(const WorkMailRequest::Action action,
                                   GetMailDomainRequest * const q);
    GetMailDomainRequestPrivate(const GetMailDomainRequestPrivate &other,
                                   GetMailDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMailDomainRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
