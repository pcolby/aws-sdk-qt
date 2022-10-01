// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATECLIENTDEVICEWITHCOREDEVICERESPONSE_P_H
#define QTAWS_BATCHASSOCIATECLIENTDEVICEWITHCOREDEVICERESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class BatchAssociateClientDeviceWithCoreDeviceResponse;

class BatchAssociateClientDeviceWithCoreDeviceResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit BatchAssociateClientDeviceWithCoreDeviceResponsePrivate(BatchAssociateClientDeviceWithCoreDeviceResponse * const q);

    void parseBatchAssociateClientDeviceWithCoreDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchAssociateClientDeviceWithCoreDeviceResponse)
    Q_DISABLE_COPY(BatchAssociateClientDeviceWithCoreDeviceResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
