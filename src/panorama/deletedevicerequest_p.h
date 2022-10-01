// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEREQUEST_P_H
#define QTAWS_DELETEDEVICEREQUEST_P_H

#include "panoramarequest_p.h"
#include "deletedevicerequest.h"

namespace QtAws {
namespace Panorama {

class DeleteDeviceRequest;

class DeleteDeviceRequestPrivate : public PanoramaRequestPrivate {

public:
    DeleteDeviceRequestPrivate(const PanoramaRequest::Action action,
                                   DeleteDeviceRequest * const q);
    DeleteDeviceRequestPrivate(const DeleteDeviceRequestPrivate &other,
                                   DeleteDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeviceRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
