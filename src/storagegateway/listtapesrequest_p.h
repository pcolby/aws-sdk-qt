// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAPESREQUEST_P_H
#define QTAWS_LISTTAPESREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "listtapesrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListTapesRequest;

class ListTapesRequestPrivate : public StorageGatewayRequestPrivate {

public:
    ListTapesRequestPrivate(const StorageGatewayRequest::Action action,
                                   ListTapesRequest * const q);
    ListTapesRequestPrivate(const ListTapesRequestPrivate &other,
                                   ListTapesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTapesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
