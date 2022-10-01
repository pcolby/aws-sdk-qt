// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPROVIDERSREQUEST_P_H
#define QTAWS_LISTIDENTITYPROVIDERSREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "listidentityprovidersrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListIdentityProvidersRequest;

class ListIdentityProvidersRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    ListIdentityProvidersRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   ListIdentityProvidersRequest * const q);
    ListIdentityProvidersRequestPrivate(const ListIdentityProvidersRequestPrivate &other,
                                   ListIdentityProvidersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIdentityProvidersRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
