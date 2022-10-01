// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHVOLUMEREQUEST_P_H
#define QTAWS_DETACHVOLUMEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "detachvolumerequest.h"

namespace QtAws {
namespace StorageGateway {

class DetachVolumeRequest;

class DetachVolumeRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DetachVolumeRequestPrivate(const StorageGatewayRequest::Action action,
                                   DetachVolumeRequest * const q);
    DetachVolumeRequestPrivate(const DetachVolumeRequestPrivate &other,
                                   DetachVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachVolumeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
