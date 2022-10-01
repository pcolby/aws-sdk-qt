// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEMFADEVICERESPONSE_P_H
#define QTAWS_ENABLEMFADEVICERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class EnableMFADeviceResponse;

class EnableMFADeviceResponsePrivate : public IamResponsePrivate {

public:

    explicit EnableMFADeviceResponsePrivate(EnableMFADeviceResponse * const q);

    void parseEnableMFADeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableMFADeviceResponse)
    Q_DISABLE_COPY(EnableMFADeviceResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
