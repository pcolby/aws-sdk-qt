// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYNOTIFICATIONATTRIBUTESREQUEST_P_H
#define QTAWS_GETIDENTITYNOTIFICATIONATTRIBUTESREQUEST_P_H

#include "sesrequest_p.h"
#include "getidentitynotificationattributesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityNotificationAttributesRequest;

class GetIdentityNotificationAttributesRequestPrivate : public SesRequestPrivate {

public:
    GetIdentityNotificationAttributesRequestPrivate(const SesRequest::Action action,
                                   GetIdentityNotificationAttributesRequest * const q);
    GetIdentityNotificationAttributesRequestPrivate(const GetIdentityNotificationAttributesRequestPrivate &other,
                                   GetIdentityNotificationAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIdentityNotificationAttributesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
