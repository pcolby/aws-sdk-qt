// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESMSSANDBOXPHONENUMBERRESPONSE_P_H
#define QTAWS_DELETESMSSANDBOXPHONENUMBERRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class DeleteSMSSandboxPhoneNumberResponse;

class DeleteSMSSandboxPhoneNumberResponsePrivate : public SnsResponsePrivate {

public:

    explicit DeleteSMSSandboxPhoneNumberResponsePrivate(DeleteSMSSandboxPhoneNumberResponse * const q);

    void parseDeleteSMSSandboxPhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSMSSandboxPhoneNumberResponse)
    Q_DISABLE_COPY(DeleteSMSSandboxPhoneNumberResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
