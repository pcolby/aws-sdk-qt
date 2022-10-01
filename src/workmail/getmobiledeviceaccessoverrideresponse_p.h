// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMOBILEDEVICEACCESSOVERRIDERESPONSE_P_H
#define QTAWS_GETMOBILEDEVICEACCESSOVERRIDERESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class GetMobileDeviceAccessOverrideResponse;

class GetMobileDeviceAccessOverrideResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit GetMobileDeviceAccessOverrideResponsePrivate(GetMobileDeviceAccessOverrideResponse * const q);

    void parseGetMobileDeviceAccessOverrideResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMobileDeviceAccessOverrideResponse)
    Q_DISABLE_COPY(GetMobileDeviceAccessOverrideResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
