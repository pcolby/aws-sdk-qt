// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOLUMEINITIATORSREQUEST_P_H
#define QTAWS_LISTVOLUMEINITIATORSREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "listvolumeinitiatorsrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListVolumeInitiatorsRequest;

class ListVolumeInitiatorsRequestPrivate : public StorageGatewayRequestPrivate {

public:
    ListVolumeInitiatorsRequestPrivate(const StorageGatewayRequest::Action action,
                                   ListVolumeInitiatorsRequest * const q);
    ListVolumeInitiatorsRequestPrivate(const ListVolumeInitiatorsRequestPrivate &other,
                                   ListVolumeInitiatorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVolumeInitiatorsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
