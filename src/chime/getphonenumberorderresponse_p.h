// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPHONENUMBERORDERRESPONSE_P_H
#define QTAWS_GETPHONENUMBERORDERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetPhoneNumberOrderResponse;

class GetPhoneNumberOrderResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetPhoneNumberOrderResponsePrivate(GetPhoneNumberOrderResponse * const q);

    void parseGetPhoneNumberOrderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPhoneNumberOrderResponse)
    Q_DISABLE_COPY(GetPhoneNumberOrderResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
