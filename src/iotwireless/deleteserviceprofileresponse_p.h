// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEPROFILERESPONSE_P_H
#define QTAWS_DELETESERVICEPROFILERESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DeleteServiceProfileResponse;

class DeleteServiceProfileResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DeleteServiceProfileResponsePrivate(DeleteServiceProfileResponse * const q);

    void parseDeleteServiceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteServiceProfileResponse)
    Q_DISABLE_COPY(DeleteServiceProfileResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
