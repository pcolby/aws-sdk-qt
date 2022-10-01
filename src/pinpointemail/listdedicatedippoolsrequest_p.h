// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEDICATEDIPPOOLSREQUEST_P_H
#define QTAWS_LISTDEDICATEDIPPOOLSREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "listdedicatedippoolsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class ListDedicatedIpPoolsRequest;

class ListDedicatedIpPoolsRequestPrivate : public PinpointEmailRequestPrivate {

public:
    ListDedicatedIpPoolsRequestPrivate(const PinpointEmailRequest::Action action,
                                   ListDedicatedIpPoolsRequest * const q);
    ListDedicatedIpPoolsRequestPrivate(const ListDedicatedIpPoolsRequestPrivate &other,
                                   ListDedicatedIpPoolsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDedicatedIpPoolsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
