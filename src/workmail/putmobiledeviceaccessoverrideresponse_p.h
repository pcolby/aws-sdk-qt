// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMOBILEDEVICEACCESSOVERRIDERESPONSE_P_H
#define QTAWS_PUTMOBILEDEVICEACCESSOVERRIDERESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class PutMobileDeviceAccessOverrideResponse;

class PutMobileDeviceAccessOverrideResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit PutMobileDeviceAccessOverrideResponsePrivate(PutMobileDeviceAccessOverrideResponse * const q);

    void parsePutMobileDeviceAccessOverrideResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutMobileDeviceAccessOverrideResponse)
    Q_DISABLE_COPY(PutMobileDeviceAccessOverrideResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
