// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYSMSSANDBOXPHONENUMBERRESPONSE_P_H
#define QTAWS_VERIFYSMSSANDBOXPHONENUMBERRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class VerifySMSSandboxPhoneNumberResponse;

class VerifySMSSandboxPhoneNumberResponsePrivate : public SnsResponsePrivate {

public:

    explicit VerifySMSSandboxPhoneNumberResponsePrivate(VerifySMSSandboxPhoneNumberResponse * const q);

    void parseVerifySMSSandboxPhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(VerifySMSSandboxPhoneNumberResponse)
    Q_DISABLE_COPY(VerifySMSSandboxPhoneNumberResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
