// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSUBSCRIPTIONATTRIBUTESREQUEST_P_H
#define QTAWS_SETSUBSCRIPTIONATTRIBUTESREQUEST_P_H

#include "snsrequest_p.h"
#include "setsubscriptionattributesrequest.h"

namespace QtAws {
namespace Sns {

class SetSubscriptionAttributesRequest;

class SetSubscriptionAttributesRequestPrivate : public SnsRequestPrivate {

public:
    SetSubscriptionAttributesRequestPrivate(const SnsRequest::Action action,
                                   SetSubscriptionAttributesRequest * const q);
    SetSubscriptionAttributesRequestPrivate(const SetSubscriptionAttributesRequestPrivate &other,
                                   SetSubscriptionAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetSubscriptionAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
