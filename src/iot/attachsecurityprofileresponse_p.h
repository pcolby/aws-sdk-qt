// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHSECURITYPROFILERESPONSE_P_H
#define QTAWS_ATTACHSECURITYPROFILERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class AttachSecurityProfileResponse;

class AttachSecurityProfileResponsePrivate : public IoTResponsePrivate {

public:

    explicit AttachSecurityProfileResponsePrivate(AttachSecurityProfileResponse * const q);

    void parseAttachSecurityProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachSecurityProfileResponse)
    Q_DISABLE_COPY(AttachSecurityProfileResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
