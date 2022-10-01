// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPHONENUMBERSETTINGSRESPONSE_P_H
#define QTAWS_GETPHONENUMBERSETTINGSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetPhoneNumberSettingsResponse;

class GetPhoneNumberSettingsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetPhoneNumberSettingsResponsePrivate(GetPhoneNumberSettingsResponse * const q);

    void parseGetPhoneNumberSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPhoneNumberSettingsResponse)
    Q_DISABLE_COPY(GetPhoneNumberSettingsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
