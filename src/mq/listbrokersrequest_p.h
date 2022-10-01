// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBROKERSREQUEST_P_H
#define QTAWS_LISTBROKERSREQUEST_P_H

#include "mqrequest_p.h"
#include "listbrokersrequest.h"

namespace QtAws {
namespace Mq {

class ListBrokersRequest;

class ListBrokersRequestPrivate : public MqRequestPrivate {

public:
    ListBrokersRequestPrivate(const MqRequest::Action action,
                                   ListBrokersRequest * const q);
    ListBrokersRequestPrivate(const ListBrokersRequestPrivate &other,
                                   ListBrokersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBrokersRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
