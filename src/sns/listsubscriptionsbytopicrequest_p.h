// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONSBYTOPICREQUEST_P_H
#define QTAWS_LISTSUBSCRIPTIONSBYTOPICREQUEST_P_H

#include "snsrequest_p.h"
#include "listsubscriptionsbytopicrequest.h"

namespace QtAws {
namespace Sns {

class ListSubscriptionsByTopicRequest;

class ListSubscriptionsByTopicRequestPrivate : public SnsRequestPrivate {

public:
    ListSubscriptionsByTopicRequestPrivate(const SnsRequest::Action action,
                                   ListSubscriptionsByTopicRequest * const q);
    ListSubscriptionsByTopicRequestPrivate(const ListSubscriptionsByTopicRequestPrivate &other,
                                   ListSubscriptionsByTopicRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSubscriptionsByTopicRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
