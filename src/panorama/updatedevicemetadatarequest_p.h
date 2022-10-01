// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEMETADATAREQUEST_P_H
#define QTAWS_UPDATEDEVICEMETADATAREQUEST_P_H

#include "panoramarequest_p.h"
#include "updatedevicemetadatarequest.h"

namespace QtAws {
namespace Panorama {

class UpdateDeviceMetadataRequest;

class UpdateDeviceMetadataRequestPrivate : public PanoramaRequestPrivate {

public:
    UpdateDeviceMetadataRequestPrivate(const PanoramaRequest::Action action,
                                   UpdateDeviceMetadataRequest * const q);
    UpdateDeviceMetadataRequestPrivate(const UpdateDeviceMetadataRequestPrivate &other,
                                   UpdateDeviceMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceMetadataRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
