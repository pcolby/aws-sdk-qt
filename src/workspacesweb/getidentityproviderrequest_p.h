// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPROVIDERREQUEST_P_H
#define QTAWS_GETIDENTITYPROVIDERREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "getidentityproviderrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetIdentityProviderRequest;

class GetIdentityProviderRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    GetIdentityProviderRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   GetIdentityProviderRequest * const q);
    GetIdentityProviderRequestPrivate(const GetIdentityProviderRequestPrivate &other,
                                   GetIdentityProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIdentityProviderRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
