// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOFFERINGSTATUSRESPONSE_P_H
#define QTAWS_GETOFFERINGSTATUSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class GetOfferingStatusResponse;

class GetOfferingStatusResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit GetOfferingStatusResponsePrivate(GetOfferingStatusResponse * const q);

    void parseGetOfferingStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOfferingStatusResponse)
    Q_DISABLE_COPY(GetOfferingStatusResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
