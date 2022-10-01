// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHSECURITYPROFILERESPONSE_P_H
#define QTAWS_DETACHSECURITYPROFILERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DetachSecurityProfileResponse;

class DetachSecurityProfileResponsePrivate : public IoTResponsePrivate {

public:

    explicit DetachSecurityProfileResponsePrivate(DetachSecurityProfileResponse * const q);

    void parseDetachSecurityProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachSecurityProfileResponse)
    Q_DISABLE_COPY(DetachSecurityProfileResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
