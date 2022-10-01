// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUBLICSHARINGSETTINGSRESPONSE_P_H
#define QTAWS_UPDATEPUBLICSHARINGSETTINGSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdatePublicSharingSettingsResponse;

class UpdatePublicSharingSettingsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdatePublicSharingSettingsResponsePrivate(UpdatePublicSharingSettingsResponse * const q);

    void parseUpdatePublicSharingSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePublicSharingSettingsResponse)
    Q_DISABLE_COPY(UpdatePublicSharingSettingsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
