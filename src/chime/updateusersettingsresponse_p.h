// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERSETTINGSRESPONSE_P_H
#define QTAWS_UPDATEUSERSETTINGSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateUserSettingsResponse;

class UpdateUserSettingsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateUserSettingsResponsePrivate(UpdateUserSettingsResponse * const q);

    void parseUpdateUserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUserSettingsResponse)
    Q_DISABLE_COPY(UpdateUserSettingsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
