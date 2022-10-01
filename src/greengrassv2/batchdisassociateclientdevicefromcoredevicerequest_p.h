// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATECLIENTDEVICEFROMCOREDEVICEREQUEST_P_H
#define QTAWS_BATCHDISASSOCIATECLIENTDEVICEFROMCOREDEVICEREQUEST_P_H

#include "greengrassv2request_p.h"
#include "batchdisassociateclientdevicefromcoredevicerequest.h"

namespace QtAws {
namespace GreengrassV2 {

class BatchDisassociateClientDeviceFromCoreDeviceRequest;

class BatchDisassociateClientDeviceFromCoreDeviceRequestPrivate : public GreengrassV2RequestPrivate {

public:
    BatchDisassociateClientDeviceFromCoreDeviceRequestPrivate(const GreengrassV2Request::Action action,
                                   BatchDisassociateClientDeviceFromCoreDeviceRequest * const q);
    BatchDisassociateClientDeviceFromCoreDeviceRequestPrivate(const BatchDisassociateClientDeviceFromCoreDeviceRequestPrivate &other,
                                   BatchDisassociateClientDeviceFromCoreDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateClientDeviceFromCoreDeviceRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
