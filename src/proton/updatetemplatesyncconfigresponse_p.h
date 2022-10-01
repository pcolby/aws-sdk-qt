// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATESYNCCONFIGRESPONSE_P_H
#define QTAWS_UPDATETEMPLATESYNCCONFIGRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class UpdateTemplateSyncConfigResponse;

class UpdateTemplateSyncConfigResponsePrivate : public ProtonResponsePrivate {

public:

    explicit UpdateTemplateSyncConfigResponsePrivate(UpdateTemplateSyncConfigResponse * const q);

    void parseUpdateTemplateSyncConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTemplateSyncConfigResponse)
    Q_DISABLE_COPY(UpdateTemplateSyncConfigResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
