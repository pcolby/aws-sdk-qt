// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELORDERREQUEST_P_H
#define QTAWS_CANCELORDERREQUEST_P_H

#include "outpostsrequest_p.h"
#include "cancelorderrequest.h"

namespace QtAws {
namespace Outposts {

class CancelOrderRequest;

class CancelOrderRequestPrivate : public OutpostsRequestPrivate {

public:
    CancelOrderRequestPrivate(const OutpostsRequest::Action action,
                                   CancelOrderRequest * const q);
    CancelOrderRequestPrivate(const CancelOrderRequestPrivate &other,
                                   CancelOrderRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelOrderRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
