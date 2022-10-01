// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBEREQUEST_P_H
#define QTAWS_SUBSCRIBEREQUEST_P_H

#include "snsrequest_p.h"
#include "subscriberequest.h"

namespace QtAws {
namespace Sns {

class SubscribeRequest;

class SubscribeRequestPrivate : public SnsRequestPrivate {

public:
    SubscribeRequestPrivate(const SnsRequest::Action action,
                                   SubscribeRequest * const q);
    SubscribeRequestPrivate(const SubscribeRequestPrivate &other,
                                   SubscribeRequest * const q);

private:
    Q_DECLARE_PUBLIC(SubscribeRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
