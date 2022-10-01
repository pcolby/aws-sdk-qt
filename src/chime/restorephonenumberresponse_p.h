// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREPHONENUMBERRESPONSE_P_H
#define QTAWS_RESTOREPHONENUMBERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class RestorePhoneNumberResponse;

class RestorePhoneNumberResponsePrivate : public ChimeResponsePrivate {

public:

    explicit RestorePhoneNumberResponsePrivate(RestorePhoneNumberResponse * const q);

    void parseRestorePhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestorePhoneNumberResponse)
    Q_DISABLE_COPY(RestorePhoneNumberResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
