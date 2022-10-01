// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATECLIENTDEVICEWITHCOREDEVICEREQUEST_P_H
#define QTAWS_BATCHASSOCIATECLIENTDEVICEWITHCOREDEVICEREQUEST_P_H

#include "greengrassv2request_p.h"
#include "batchassociateclientdevicewithcoredevicerequest.h"

namespace QtAws {
namespace GreengrassV2 {

class BatchAssociateClientDeviceWithCoreDeviceRequest;

class BatchAssociateClientDeviceWithCoreDeviceRequestPrivate : public GreengrassV2RequestPrivate {

public:
    BatchAssociateClientDeviceWithCoreDeviceRequestPrivate(const GreengrassV2Request::Action action,
                                   BatchAssociateClientDeviceWithCoreDeviceRequest * const q);
    BatchAssociateClientDeviceWithCoreDeviceRequestPrivate(const BatchAssociateClientDeviceWithCoreDeviceRequestPrivate &other,
                                   BatchAssociateClientDeviceWithCoreDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchAssociateClientDeviceWithCoreDeviceRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
