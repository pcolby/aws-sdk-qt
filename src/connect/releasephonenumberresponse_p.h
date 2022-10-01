// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEPHONENUMBERRESPONSE_P_H
#define QTAWS_RELEASEPHONENUMBERRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ReleasePhoneNumberResponse;

class ReleasePhoneNumberResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ReleasePhoneNumberResponsePrivate(ReleasePhoneNumberResponse * const q);

    void parseReleasePhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReleasePhoneNumberResponse)
    Q_DISABLE_COPY(ReleasePhoneNumberResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
