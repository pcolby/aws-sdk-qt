// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARTNERACCOUNTRESPONSE_P_H
#define QTAWS_UPDATEPARTNERACCOUNTRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class UpdatePartnerAccountResponse;

class UpdatePartnerAccountResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit UpdatePartnerAccountResponsePrivate(UpdatePartnerAccountResponse * const q);

    void parseUpdatePartnerAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePartnerAccountResponse)
    Q_DISABLE_COPY(UpdatePartnerAccountResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
