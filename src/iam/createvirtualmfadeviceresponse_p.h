// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALMFADEVICERESPONSE_P_H
#define QTAWS_CREATEVIRTUALMFADEVICERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class CreateVirtualMFADeviceResponse;

class CreateVirtualMFADeviceResponsePrivate : public IamResponsePrivate {

public:

    explicit CreateVirtualMFADeviceResponsePrivate(CreateVirtualMFADeviceResponse * const q);

    void parseCreateVirtualMFADeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVirtualMFADeviceResponse)
    Q_DISABLE_COPY(CreateVirtualMFADeviceResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
