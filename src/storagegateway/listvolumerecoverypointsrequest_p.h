// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOLUMERECOVERYPOINTSREQUEST_P_H
#define QTAWS_LISTVOLUMERECOVERYPOINTSREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "listvolumerecoverypointsrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListVolumeRecoveryPointsRequest;

class ListVolumeRecoveryPointsRequestPrivate : public StorageGatewayRequestPrivate {

public:
    ListVolumeRecoveryPointsRequestPrivate(const StorageGatewayRequest::Action action,
                                   ListVolumeRecoveryPointsRequest * const q);
    ListVolumeRecoveryPointsRequestPrivate(const ListVolumeRecoveryPointsRequestPrivate &other,
                                   ListVolumeRecoveryPointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVolumeRecoveryPointsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
