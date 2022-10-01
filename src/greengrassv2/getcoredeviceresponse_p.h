// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOREDEVICERESPONSE_P_H
#define QTAWS_GETCOREDEVICERESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class GetCoreDeviceResponse;

class GetCoreDeviceResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit GetCoreDeviceResponsePrivate(GetCoreDeviceResponse * const q);

    void parseGetCoreDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCoreDeviceResponse)
    Q_DISABLE_COPY(GetCoreDeviceResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
