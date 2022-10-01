// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSUBSCRIBEREQUEST_P_H
#define QTAWS_UNSUBSCRIBEREQUEST_P_H

#include "snsrequest_p.h"
#include "unsubscriberequest.h"

namespace QtAws {
namespace Sns {

class UnsubscribeRequest;

class UnsubscribeRequestPrivate : public SnsRequestPrivate {

public:
    UnsubscribeRequestPrivate(const SnsRequest::Action action,
                                   UnsubscribeRequest * const q);
    UnsubscribeRequestPrivate(const UnsubscribeRequestPrivate &other,
                                   UnsubscribeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnsubscribeRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
