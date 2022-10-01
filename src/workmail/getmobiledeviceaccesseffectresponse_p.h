// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMOBILEDEVICEACCESSEFFECTRESPONSE_P_H
#define QTAWS_GETMOBILEDEVICEACCESSEFFECTRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class GetMobileDeviceAccessEffectResponse;

class GetMobileDeviceAccessEffectResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit GetMobileDeviceAccessEffectResponsePrivate(GetMobileDeviceAccessEffectResponse * const q);

    void parseGetMobileDeviceAccessEffectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMobileDeviceAccessEffectResponse)
    Q_DISABLE_COPY(GetMobileDeviceAccessEffectResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
