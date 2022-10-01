// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESYNCMFADEVICERESPONSE_P_H
#define QTAWS_RESYNCMFADEVICERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ResyncMFADeviceResponse;

class ResyncMFADeviceResponsePrivate : public IamResponsePrivate {

public:

    explicit ResyncMFADeviceResponsePrivate(ResyncMFADeviceResponse * const q);

    void parseResyncMFADeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResyncMFADeviceResponse)
    Q_DISABLE_COPY(ResyncMFADeviceResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
