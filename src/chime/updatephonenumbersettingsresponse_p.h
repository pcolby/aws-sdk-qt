// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPHONENUMBERSETTINGSRESPONSE_P_H
#define QTAWS_UPDATEPHONENUMBERSETTINGSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdatePhoneNumberSettingsResponse;

class UpdatePhoneNumberSettingsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdatePhoneNumberSettingsResponsePrivate(UpdatePhoneNumberSettingsResponse * const q);

    void parseUpdatePhoneNumberSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePhoneNumberSettingsResponse)
    Q_DISABLE_COPY(UpdatePhoneNumberSettingsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
