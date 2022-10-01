// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEMFADEVICERESPONSE_P_H
#define QTAWS_DEACTIVATEMFADEVICERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeactivateMFADeviceResponse;

class DeactivateMFADeviceResponsePrivate : public IamResponsePrivate {

public:

    explicit DeactivateMFADeviceResponsePrivate(DeactivateMFADeviceResponse * const q);

    void parseDeactivateMFADeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeactivateMFADeviceResponse)
    Q_DISABLE_COPY(DeactivateMFADeviceResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
