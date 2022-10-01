// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBSITEAUTHORIZATIONPROVIDERSREQUEST_P_H
#define QTAWS_LISTWEBSITEAUTHORIZATIONPROVIDERSREQUEST_P_H

#include "worklinkrequest_p.h"
#include "listwebsiteauthorizationprovidersrequest.h"

namespace QtAws {
namespace WorkLink {

class ListWebsiteAuthorizationProvidersRequest;

class ListWebsiteAuthorizationProvidersRequestPrivate : public WorkLinkRequestPrivate {

public:
    ListWebsiteAuthorizationProvidersRequestPrivate(const WorkLinkRequest::Action action,
                                   ListWebsiteAuthorizationProvidersRequest * const q);
    ListWebsiteAuthorizationProvidersRequestPrivate(const ListWebsiteAuthorizationProvidersRequestPrivate &other,
                                   ListWebsiteAuthorizationProvidersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWebsiteAuthorizationProvidersRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
