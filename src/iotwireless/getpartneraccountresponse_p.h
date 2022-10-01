// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARTNERACCOUNTRESPONSE_P_H
#define QTAWS_GETPARTNERACCOUNTRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetPartnerAccountResponse;

class GetPartnerAccountResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetPartnerAccountResponsePrivate(GetPartnerAccountResponse * const q);

    void parseGetPartnerAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPartnerAccountResponse)
    Q_DISABLE_COPY(GetPartnerAccountResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
