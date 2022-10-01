// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERFROMWORKMAILREQUEST_P_H
#define QTAWS_DEREGISTERFROMWORKMAILREQUEST_P_H

#include "workmailrequest_p.h"
#include "deregisterfromworkmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DeregisterFromWorkMailRequest;

class DeregisterFromWorkMailRequestPrivate : public WorkMailRequestPrivate {

public:
    DeregisterFromWorkMailRequestPrivate(const WorkMailRequest::Action action,
                                   DeregisterFromWorkMailRequest * const q);
    DeregisterFromWorkMailRequestPrivate(const DeregisterFromWorkMailRequestPrivate &other,
                                   DeregisterFromWorkMailRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterFromWorkMailRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
