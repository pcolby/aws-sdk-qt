// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALMFADEVICERESPONSE_P_H
#define QTAWS_DELETEVIRTUALMFADEVICERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteVirtualMFADeviceResponse;

class DeleteVirtualMFADeviceResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteVirtualMFADeviceResponsePrivate(DeleteVirtualMFADeviceResponse * const q);

    void parseDeleteVirtualMFADeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVirtualMFADeviceResponse)
    Q_DISABLE_COPY(DeleteVirtualMFADeviceResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
