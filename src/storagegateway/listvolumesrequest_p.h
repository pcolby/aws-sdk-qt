// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOLUMESREQUEST_P_H
#define QTAWS_LISTVOLUMESREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "listvolumesrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListVolumesRequest;

class ListVolumesRequestPrivate : public StorageGatewayRequestPrivate {

public:
    ListVolumesRequestPrivate(const StorageGatewayRequest::Action action,
                                   ListVolumesRequest * const q);
    ListVolumesRequestPrivate(const ListVolumesRequestPrivate &other,
                                   ListVolumesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVolumesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
