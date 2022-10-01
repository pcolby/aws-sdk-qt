// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALSETTINGSRESPONSE_P_H
#define QTAWS_UPDATEGLOBALSETTINGSRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class UpdateGlobalSettingsResponse;

class UpdateGlobalSettingsResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit UpdateGlobalSettingsResponsePrivate(UpdateGlobalSettingsResponse * const q);

    void parseUpdateGlobalSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGlobalSettingsResponse)
    Q_DISABLE_COPY(UpdateGlobalSettingsResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
