// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYPROVIDERREQUEST_P_H
#define QTAWS_DELETEIDENTITYPROVIDERREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "deleteidentityproviderrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteIdentityProviderRequest;

class DeleteIdentityProviderRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    DeleteIdentityProviderRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   DeleteIdentityProviderRequest * const q);
    DeleteIdentityProviderRequestPrivate(const DeleteIdentityProviderRequestPrivate &other,
                                   DeleteIdentityProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIdentityProviderRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
