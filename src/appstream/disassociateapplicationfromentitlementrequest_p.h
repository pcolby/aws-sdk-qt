// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPLICATIONFROMENTITLEMENTREQUEST_P_H
#define QTAWS_DISASSOCIATEAPPLICATIONFROMENTITLEMENTREQUEST_P_H

#include "appstreamrequest_p.h"
#include "disassociateapplicationfromentitlementrequest.h"

namespace QtAws {
namespace AppStream {

class DisassociateApplicationFromEntitlementRequest;

class DisassociateApplicationFromEntitlementRequestPrivate : public AppStreamRequestPrivate {

public:
    DisassociateApplicationFromEntitlementRequestPrivate(const AppStreamRequest::Action action,
                                   DisassociateApplicationFromEntitlementRequest * const q);
    DisassociateApplicationFromEntitlementRequestPrivate(const DisassociateApplicationFromEntitlementRequestPrivate &other,
                                   DisassociateApplicationFromEntitlementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateApplicationFromEntitlementRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
