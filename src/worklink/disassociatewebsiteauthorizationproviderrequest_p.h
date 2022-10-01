// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWEBSITEAUTHORIZATIONPROVIDERREQUEST_P_H
#define QTAWS_DISASSOCIATEWEBSITEAUTHORIZATIONPROVIDERREQUEST_P_H

#include "worklinkrequest_p.h"
#include "disassociatewebsiteauthorizationproviderrequest.h"

namespace QtAws {
namespace WorkLink {

class DisassociateWebsiteAuthorizationProviderRequest;

class DisassociateWebsiteAuthorizationProviderRequestPrivate : public WorkLinkRequestPrivate {

public:
    DisassociateWebsiteAuthorizationProviderRequestPrivate(const WorkLinkRequest::Action action,
                                   DisassociateWebsiteAuthorizationProviderRequest * const q);
    DisassociateWebsiteAuthorizationProviderRequestPrivate(const DisassociateWebsiteAuthorizationProviderRequestPrivate &other,
                                   DisassociateWebsiteAuthorizationProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateWebsiteAuthorizationProviderRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
