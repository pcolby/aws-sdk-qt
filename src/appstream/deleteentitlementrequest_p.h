// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITLEMENTREQUEST_P_H
#define QTAWS_DELETEENTITLEMENTREQUEST_P_H

#include "appstreamrequest_p.h"
#include "deleteentitlementrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteEntitlementRequest;

class DeleteEntitlementRequestPrivate : public AppStreamRequestPrivate {

public:
    DeleteEntitlementRequestPrivate(const AppStreamRequest::Action action,
                                   DeleteEntitlementRequest * const q);
    DeleteEntitlementRequestPrivate(const DeleteEntitlementRequestPrivate &other,
                                   DeleteEntitlementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEntitlementRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
