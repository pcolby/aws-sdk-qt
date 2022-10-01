// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMPHONENUMBERRESPONSE_P_H
#define QTAWS_CLAIMPHONENUMBERRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ClaimPhoneNumberResponse;

class ClaimPhoneNumberResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ClaimPhoneNumberResponsePrivate(ClaimPhoneNumberResponse * const q);

    void parseClaimPhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ClaimPhoneNumberResponse)
    Q_DISABLE_COPY(ClaimPhoneNumberResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
