// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIDENTITYPROVIDERCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEIDENTITYPROVIDERCONFIGURATIONREQUEST_P_H

#include "worklinkrequest_p.h"
#include "updateidentityproviderconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateIdentityProviderConfigurationRequest;

class UpdateIdentityProviderConfigurationRequestPrivate : public WorkLinkRequestPrivate {

public:
    UpdateIdentityProviderConfigurationRequestPrivate(const WorkLinkRequest::Action action,
                                   UpdateIdentityProviderConfigurationRequest * const q);
    UpdateIdentityProviderConfigurationRequestPrivate(const UpdateIdentityProviderConfigurationRequestPrivate &other,
                                   UpdateIdentityProviderConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIdentityProviderConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
