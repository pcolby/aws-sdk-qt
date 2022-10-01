// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATECLIENTDEVICEFROMCOREDEVICERESPONSE_P_H
#define QTAWS_BATCHDISASSOCIATECLIENTDEVICEFROMCOREDEVICERESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class BatchDisassociateClientDeviceFromCoreDeviceResponse;

class BatchDisassociateClientDeviceFromCoreDeviceResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit BatchDisassociateClientDeviceFromCoreDeviceResponsePrivate(BatchDisassociateClientDeviceFromCoreDeviceResponse * const q);

    void parseBatchDisassociateClientDeviceFromCoreDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateClientDeviceFromCoreDeviceResponse)
    Q_DISABLE_COPY(BatchDisassociateClientDeviceFromCoreDeviceResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
