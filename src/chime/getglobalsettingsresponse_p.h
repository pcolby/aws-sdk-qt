// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGLOBALSETTINGSRESPONSE_P_H
#define QTAWS_GETGLOBALSETTINGSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetGlobalSettingsResponse;

class GetGlobalSettingsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetGlobalSettingsResponsePrivate(GetGlobalSettingsResponse * const q);

    void parseGetGlobalSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGlobalSettingsResponse)
    Q_DISABLE_COPY(GetGlobalSettingsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
