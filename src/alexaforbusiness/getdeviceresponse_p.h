// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICERESPONSE_P_H
#define QTAWS_GETDEVICERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetDeviceResponse;

class GetDeviceResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit GetDeviceResponsePrivate(GetDeviceResponse * const q);

    void parseGetDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeviceResponse)
    Q_DISABLE_COPY(GetDeviceResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
