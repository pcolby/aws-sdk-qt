// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERAVSDEVICERESPONSE_P_H
#define QTAWS_REGISTERAVSDEVICERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class RegisterAVSDeviceResponse;

class RegisterAVSDeviceResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit RegisterAVSDeviceResponsePrivate(RegisterAVSDeviceResponse * const q);

    void parseRegisterAVSDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterAVSDeviceResponse)
    Q_DISABLE_COPY(RegisterAVSDeviceResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
