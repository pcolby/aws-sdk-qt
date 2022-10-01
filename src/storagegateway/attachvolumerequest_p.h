// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHVOLUMEREQUEST_P_H
#define QTAWS_ATTACHVOLUMEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "attachvolumerequest.h"

namespace QtAws {
namespace StorageGateway {

class AttachVolumeRequest;

class AttachVolumeRequestPrivate : public StorageGatewayRequestPrivate {

public:
    AttachVolumeRequestPrivate(const StorageGatewayRequest::Action action,
                                   AttachVolumeRequest * const q);
    AttachVolumeRequestPrivate(const AttachVolumeRequestPrivate &other,
                                   AttachVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachVolumeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
