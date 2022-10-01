// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTRESPONSE_P_H
#define QTAWS_GETACCOUNTRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class GetAccountResponse;

class GetAccountResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit GetAccountResponsePrivate(GetAccountResponse * const q);

    void parseGetAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccountResponse)
    Q_DISABLE_COPY(GetAccountResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
