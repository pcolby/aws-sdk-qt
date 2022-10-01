// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONDEVICEREQUEST_P_H
#define QTAWS_PROVISIONDEVICEREQUEST_P_H

#include "panoramarequest_p.h"
#include "provisiondevicerequest.h"

namespace QtAws {
namespace Panorama {

class ProvisionDeviceRequest;

class ProvisionDeviceRequestPrivate : public PanoramaRequestPrivate {

public:
    ProvisionDeviceRequestPrivate(const PanoramaRequest::Action action,
                                   ProvisionDeviceRequest * const q);
    ProvisionDeviceRequestPrivate(const ProvisionDeviceRequestPrivate &other,
                                   ProvisionDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ProvisionDeviceRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
