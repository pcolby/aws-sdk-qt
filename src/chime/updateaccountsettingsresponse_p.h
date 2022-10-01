// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTSETTINGSRESPONSE_P_H
#define QTAWS_UPDATEACCOUNTSETTINGSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateAccountSettingsResponse;

class UpdateAccountSettingsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateAccountSettingsResponsePrivate(UpdateAccountSettingsResponse * const q);

    void parseUpdateAccountSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAccountSettingsResponse)
    Q_DISABLE_COPY(UpdateAccountSettingsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
