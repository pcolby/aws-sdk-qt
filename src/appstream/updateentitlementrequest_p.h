// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENTITLEMENTREQUEST_P_H
#define QTAWS_UPDATEENTITLEMENTREQUEST_P_H

#include "appstreamrequest_p.h"
#include "updateentitlementrequest.h"

namespace QtAws {
namespace AppStream {

class UpdateEntitlementRequest;

class UpdateEntitlementRequestPrivate : public AppStreamRequestPrivate {

public:
    UpdateEntitlementRequestPrivate(const AppStreamRequest::Action action,
                                   UpdateEntitlementRequest * const q);
    UpdateEntitlementRequestPrivate(const UpdateEntitlementRequestPrivate &other,
                                   UpdateEntitlementRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEntitlementRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
