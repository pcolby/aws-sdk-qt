// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWEBSITEAUTHORIZATIONPROVIDERREQUEST_P_H
#define QTAWS_ASSOCIATEWEBSITEAUTHORIZATIONPROVIDERREQUEST_P_H

#include "worklinkrequest_p.h"
#include "associatewebsiteauthorizationproviderrequest.h"

namespace QtAws {
namespace WorkLink {

class AssociateWebsiteAuthorizationProviderRequest;

class AssociateWebsiteAuthorizationProviderRequestPrivate : public WorkLinkRequestPrivate {

public:
    AssociateWebsiteAuthorizationProviderRequestPrivate(const WorkLinkRequest::Action action,
                                   AssociateWebsiteAuthorizationProviderRequest * const q);
    AssociateWebsiteAuthorizationProviderRequestPrivate(const AssociateWebsiteAuthorizationProviderRequestPrivate &other,
                                   AssociateWebsiteAuthorizationProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateWebsiteAuthorizationProviderRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
