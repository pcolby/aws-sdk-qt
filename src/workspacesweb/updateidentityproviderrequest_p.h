// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIDENTITYPROVIDERREQUEST_P_H
#define QTAWS_UPDATEIDENTITYPROVIDERREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "updateidentityproviderrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateIdentityProviderRequest;

class UpdateIdentityProviderRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    UpdateIdentityProviderRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   UpdateIdentityProviderRequest * const q);
    UpdateIdentityProviderRequestPrivate(const UpdateIdentityProviderRequestPrivate &other,
                                   UpdateIdentityProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIdentityProviderRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
