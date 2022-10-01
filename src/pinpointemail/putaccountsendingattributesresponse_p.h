// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSENDINGATTRIBUTESRESPONSE_P_H
#define QTAWS_PUTACCOUNTSENDINGATTRIBUTESRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class PutAccountSendingAttributesResponse;

class PutAccountSendingAttributesResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit PutAccountSendingAttributesResponsePrivate(PutAccountSendingAttributesResponse * const q);

    void parsePutAccountSendingAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAccountSendingAttributesResponse)
    Q_DISABLE_COPY(PutAccountSendingAttributesResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
