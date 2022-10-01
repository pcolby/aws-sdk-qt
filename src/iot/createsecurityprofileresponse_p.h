// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECURITYPROFILERESPONSE_P_H
#define QTAWS_CREATESECURITYPROFILERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateSecurityProfileResponse;

class CreateSecurityProfileResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateSecurityProfileResponsePrivate(CreateSecurityProfileResponse * const q);

    void parseCreateSecurityProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSecurityProfileResponse)
    Q_DISABLE_COPY(CreateSecurityProfileResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
