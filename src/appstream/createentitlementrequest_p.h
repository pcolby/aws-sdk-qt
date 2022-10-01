// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENTITLEMENTREQUEST_P_H
#define QTAWS_CREATEENTITLEMENTREQUEST_P_H

#include "appstreamrequest_p.h"
#include "createentitlementrequest.h"

namespace QtAws {
namespace AppStream {

class CreateEntitlementRequest;

class CreateEntitlementRequestPrivate : public AppStreamRequestPrivate {

public:
    CreateEntitlementRequestPrivate(const AppStreamRequest::Action action,
                                   CreateEntitlementRequest * const q);
    CreateEntitlementRequestPrivate(const CreateEntitlementRequestPrivate &other,
                                   CreateEntitlementRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEntitlementRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
