// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPLICATIONTOENTITLEMENTREQUEST_P_H
#define QTAWS_ASSOCIATEAPPLICATIONTOENTITLEMENTREQUEST_P_H

#include "appstreamrequest_p.h"
#include "associateapplicationtoentitlementrequest.h"

namespace QtAws {
namespace AppStream {

class AssociateApplicationToEntitlementRequest;

class AssociateApplicationToEntitlementRequestPrivate : public AppStreamRequestPrivate {

public:
    AssociateApplicationToEntitlementRequestPrivate(const AppStreamRequest::Action action,
                                   AssociateApplicationToEntitlementRequest * const q);
    AssociateApplicationToEntitlementRequestPrivate(const AssociateApplicationToEntitlementRequestPrivate &other,
                                   AssociateApplicationToEntitlementRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateApplicationToEntitlementRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
