// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICERESPONSE_P_H
#define QTAWS_UPDATEDEVICERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateDeviceResponse;

class UpdateDeviceResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit UpdateDeviceResponsePrivate(UpdateDeviceResponse * const q);

    void parseUpdateDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceResponse)
    Q_DISABLE_COPY(UpdateDeviceResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
