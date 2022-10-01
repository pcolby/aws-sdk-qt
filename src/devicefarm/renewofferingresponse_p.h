// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENEWOFFERINGRESPONSE_P_H
#define QTAWS_RENEWOFFERINGRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class RenewOfferingResponse;

class RenewOfferingResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit RenewOfferingResponsePrivate(RenewOfferingResponse * const q);

    void parseRenewOfferingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RenewOfferingResponse)
    Q_DISABLE_COPY(RenewOfferingResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
