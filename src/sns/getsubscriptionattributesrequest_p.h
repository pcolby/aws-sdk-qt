// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONATTRIBUTESREQUEST_P_H
#define QTAWS_GETSUBSCRIPTIONATTRIBUTESREQUEST_P_H

#include "snsrequest_p.h"
#include "getsubscriptionattributesrequest.h"

namespace QtAws {
namespace Sns {

class GetSubscriptionAttributesRequest;

class GetSubscriptionAttributesRequestPrivate : public SnsRequestPrivate {

public:
    GetSubscriptionAttributesRequestPrivate(const SnsRequest::Action action,
                                   GetSubscriptionAttributesRequest * const q);
    GetSubscriptionAttributesRequestPrivate(const GetSubscriptionAttributesRequestPrivate &other,
                                   GetSubscriptionAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSubscriptionAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
