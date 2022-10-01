// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSFORSECURITYPROFILERESPONSE_P_H
#define QTAWS_LISTTARGETSFORSECURITYPROFILERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListTargetsForSecurityProfileResponse;

class ListTargetsForSecurityProfileResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListTargetsForSecurityProfileResponsePrivate(ListTargetsForSecurityProfileResponse * const q);

    void parseListTargetsForSecurityProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTargetsForSecurityProfileResponse)
    Q_DISABLE_COPY(ListTargetsForSecurityProfileResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
