// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSMSSANDBOXPHONENUMBERSRESPONSE_P_H
#define QTAWS_LISTSMSSANDBOXPHONENUMBERSRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class ListSMSSandboxPhoneNumbersResponse;

class ListSMSSandboxPhoneNumbersResponsePrivate : public SnsResponsePrivate {

public:

    explicit ListSMSSandboxPhoneNumbersResponsePrivate(ListSMSSandboxPhoneNumbersResponse * const q);

    void parseListSMSSandboxPhoneNumbersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSMSSandboxPhoneNumbersResponse)
    Q_DISABLE_COPY(ListSMSSandboxPhoneNumbersResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
