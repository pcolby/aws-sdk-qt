// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESMSSANDBOXPHONENUMBERRESPONSE_P_H
#define QTAWS_CREATESMSSANDBOXPHONENUMBERRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class CreateSMSSandboxPhoneNumberResponse;

class CreateSMSSandboxPhoneNumberResponsePrivate : public SnsResponsePrivate {

public:

    explicit CreateSMSSandboxPhoneNumberResponsePrivate(CreateSMSSandboxPhoneNumberResponse * const q);

    void parseCreateSMSSandboxPhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSMSSandboxPhoneNumberResponse)
    Q_DISABLE_COPY(CreateSMSSandboxPhoneNumberResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
