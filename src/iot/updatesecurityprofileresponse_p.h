// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYPROFILERESPONSE_P_H
#define QTAWS_UPDATESECURITYPROFILERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateSecurityProfileResponse;

class UpdateSecurityProfileResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateSecurityProfileResponsePrivate(UpdateSecurityProfileResponse * const q);

    void parseUpdateSecurityProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSecurityProfileResponse)
    Q_DISABLE_COPY(UpdateSecurityProfileResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
