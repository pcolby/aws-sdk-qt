// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPHONENUMBERRESPONSE_P_H
#define QTAWS_UPDATEPHONENUMBERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdatePhoneNumberResponse;

class UpdatePhoneNumberResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdatePhoneNumberResponsePrivate(UpdatePhoneNumberResponse * const q);

    void parseUpdatePhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePhoneNumberResponse)
    Q_DISABLE_COPY(UpdatePhoneNumberResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
