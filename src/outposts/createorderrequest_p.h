// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORDERREQUEST_P_H
#define QTAWS_CREATEORDERREQUEST_P_H

#include "outpostsrequest_p.h"
#include "createorderrequest.h"

namespace QtAws {
namespace Outposts {

class CreateOrderRequest;

class CreateOrderRequestPrivate : public OutpostsRequestPrivate {

public:
    CreateOrderRequestPrivate(const OutpostsRequest::Action action,
                                   CreateOrderRequest * const q);
    CreateOrderRequestPrivate(const CreateOrderRequestPrivate &other,
                                   CreateOrderRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOrderRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
