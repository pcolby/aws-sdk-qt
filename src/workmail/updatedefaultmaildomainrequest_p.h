// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEFAULTMAILDOMAINREQUEST_P_H
#define QTAWS_UPDATEDEFAULTMAILDOMAINREQUEST_P_H

#include "workmailrequest_p.h"
#include "updatedefaultmaildomainrequest.h"

namespace QtAws {
namespace WorkMail {

class UpdateDefaultMailDomainRequest;

class UpdateDefaultMailDomainRequestPrivate : public WorkMailRequestPrivate {

public:
    UpdateDefaultMailDomainRequestPrivate(const WorkMailRequest::Action action,
                                   UpdateDefaultMailDomainRequest * const q);
    UpdateDefaultMailDomainRequestPrivate(const UpdateDefaultMailDomainRequestPrivate &other,
                                   UpdateDefaultMailDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDefaultMailDomainRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
