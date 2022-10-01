// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYRECOMMENDATIONSRECEIVEDREQUEST_P_H
#define QTAWS_NOTIFYRECOMMENDATIONSRECEIVEDREQUEST_P_H

#include "wisdomrequest_p.h"
#include "notifyrecommendationsreceivedrequest.h"

namespace QtAws {
namespace Wisdom {

class NotifyRecommendationsReceivedRequest;

class NotifyRecommendationsReceivedRequestPrivate : public WisdomRequestPrivate {

public:
    NotifyRecommendationsReceivedRequestPrivate(const WisdomRequest::Action action,
                                   NotifyRecommendationsReceivedRequest * const q);
    NotifyRecommendationsReceivedRequestPrivate(const NotifyRecommendationsReceivedRequestPrivate &other,
                                   NotifyRecommendationsReceivedRequest * const q);

private:
    Q_DECLARE_PUBLIC(NotifyRecommendationsReceivedRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
