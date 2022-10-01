// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPHONENUMBERRESPONSE_P_H
#define QTAWS_GETPHONENUMBERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetPhoneNumberResponse;

class GetPhoneNumberResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetPhoneNumberResponsePrivate(GetPhoneNumberResponse * const q);

    void parseGetPhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPhoneNumberResponse)
    Q_DISABLE_COPY(GetPhoneNumberResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
