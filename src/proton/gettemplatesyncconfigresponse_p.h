// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATESYNCCONFIGRESPONSE_P_H
#define QTAWS_GETTEMPLATESYNCCONFIGRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class GetTemplateSyncConfigResponse;

class GetTemplateSyncConfigResponsePrivate : public ProtonResponsePrivate {

public:

    explicit GetTemplateSyncConfigResponsePrivate(GetTemplateSyncConfigResponse * const q);

    void parseGetTemplateSyncConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTemplateSyncConfigResponse)
    Q_DISABLE_COPY(GetTemplateSyncConfigResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
