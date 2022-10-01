// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAILDOMAINSREQUEST_P_H
#define QTAWS_LISTMAILDOMAINSREQUEST_P_H

#include "workmailrequest_p.h"
#include "listmaildomainsrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMailDomainsRequest;

class ListMailDomainsRequestPrivate : public WorkMailRequestPrivate {

public:
    ListMailDomainsRequestPrivate(const WorkMailRequest::Action action,
                                   ListMailDomainsRequest * const q);
    ListMailDomainsRequestPrivate(const ListMailDomainsRequestPrivate &other,
                                   ListMailDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMailDomainsRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
