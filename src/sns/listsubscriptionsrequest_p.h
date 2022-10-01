// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONSREQUEST_P_H
#define QTAWS_LISTSUBSCRIPTIONSREQUEST_P_H

#include "snsrequest_p.h"
#include "listsubscriptionsrequest.h"

namespace QtAws {
namespace Sns {

class ListSubscriptionsRequest;

class ListSubscriptionsRequestPrivate : public SnsRequestPrivate {

public:
    ListSubscriptionsRequestPrivate(const SnsRequest::Action action,
                                   ListSubscriptionsRequest * const q);
    ListSubscriptionsRequestPrivate(const ListSubscriptionsRequestPrivate &other,
                                   ListSubscriptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSubscriptionsRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
