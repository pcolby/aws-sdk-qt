// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEDICATEDIPPOOLSREQUEST_P_H
#define QTAWS_LISTDEDICATEDIPPOOLSREQUEST_P_H

#include "sesv2request_p.h"
#include "listdedicatedippoolsrequest.h"

namespace QtAws {
namespace SESv2 {

class ListDedicatedIpPoolsRequest;

class ListDedicatedIpPoolsRequestPrivate : public SESv2RequestPrivate {

public:
    ListDedicatedIpPoolsRequestPrivate(const SESv2Request::Action action,
                                   ListDedicatedIpPoolsRequest * const q);
    ListDedicatedIpPoolsRequestPrivate(const ListDedicatedIpPoolsRequestPrivate &other,
                                   ListDedicatedIpPoolsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDedicatedIpPoolsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
