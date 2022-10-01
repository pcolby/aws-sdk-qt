// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINSREQUEST_P_H
#define QTAWS_LISTDOMAINSREQUEST_P_H

#include "worklinkrequest_p.h"
#include "listdomainsrequest.h"

namespace QtAws {
namespace WorkLink {

class ListDomainsRequest;

class ListDomainsRequestPrivate : public WorkLinkRequestPrivate {

public:
    ListDomainsRequestPrivate(const WorkLinkRequest::Action action,
                                   ListDomainsRequest * const q);
    ListDomainsRequestPrivate(const ListDomainsRequestPrivate &other,
                                   ListDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDomainsRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
