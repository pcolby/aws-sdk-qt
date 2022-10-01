// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAILBOXDETAILSREQUEST_P_H
#define QTAWS_GETMAILBOXDETAILSREQUEST_P_H

#include "workmailrequest_p.h"
#include "getmailboxdetailsrequest.h"

namespace QtAws {
namespace WorkMail {

class GetMailboxDetailsRequest;

class GetMailboxDetailsRequestPrivate : public WorkMailRequestPrivate {

public:
    GetMailboxDetailsRequestPrivate(const WorkMailRequest::Action action,
                                   GetMailboxDetailsRequest * const q);
    GetMailboxDetailsRequestPrivate(const GetMailboxDetailsRequestPrivate &other,
                                   GetMailboxDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMailboxDetailsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
