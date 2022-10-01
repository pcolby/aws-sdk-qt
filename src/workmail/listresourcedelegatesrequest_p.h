// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEDELEGATESREQUEST_P_H
#define QTAWS_LISTRESOURCEDELEGATESREQUEST_P_H

#include "workmailrequest_p.h"
#include "listresourcedelegatesrequest.h"

namespace QtAws {
namespace WorkMail {

class ListResourceDelegatesRequest;

class ListResourceDelegatesRequestPrivate : public WorkMailRequestPrivate {

public:
    ListResourceDelegatesRequestPrivate(const WorkMailRequest::Action action,
                                   ListResourceDelegatesRequest * const q);
    ListResourceDelegatesRequestPrivate(const ListResourceDelegatesRequestPrivate &other,
                                   ListResourceDelegatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourceDelegatesRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
