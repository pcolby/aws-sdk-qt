// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAPEPOOLSREQUEST_P_H
#define QTAWS_LISTTAPEPOOLSREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "listtapepoolsrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListTapePoolsRequest;

class ListTapePoolsRequestPrivate : public StorageGatewayRequestPrivate {

public:
    ListTapePoolsRequestPrivate(const StorageGatewayRequest::Action action,
                                   ListTapePoolsRequest * const q);
    ListTapePoolsRequestPrivate(const ListTapePoolsRequestPrivate &other,
                                   ListTapePoolsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTapePoolsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
