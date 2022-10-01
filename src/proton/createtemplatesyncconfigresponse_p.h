// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETEMPLATESYNCCONFIGRESPONSE_P_H
#define QTAWS_CREATETEMPLATESYNCCONFIGRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class CreateTemplateSyncConfigResponse;

class CreateTemplateSyncConfigResponsePrivate : public ProtonResponsePrivate {

public:

    explicit CreateTemplateSyncConfigResponsePrivate(CreateTemplateSyncConfigResponse * const q);

    void parseCreateTemplateSyncConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTemplateSyncConfigResponse)
    Q_DISABLE_COPY(CreateTemplateSyncConfigResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
