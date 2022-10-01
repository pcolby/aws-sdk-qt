// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDEVICERESPONSE_P_H
#define QTAWS_REGISTERDEVICERESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class RegisterDeviceResponse;

class RegisterDeviceResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit RegisterDeviceResponsePrivate(RegisterDeviceResponse * const q);

    void parseRegisterDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterDeviceResponse)
    Q_DISABLE_COPY(RegisterDeviceResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
