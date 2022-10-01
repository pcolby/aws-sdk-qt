// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATESYNCSTATUSRESPONSE_P_H
#define QTAWS_GETTEMPLATESYNCSTATUSRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class GetTemplateSyncStatusResponse;

class GetTemplateSyncStatusResponsePrivate : public ProtonResponsePrivate {

public:

    explicit GetTemplateSyncStatusResponsePrivate(GetTemplateSyncStatusResponse * const q);

    void parseGetTemplateSyncStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTemplateSyncStatusResponse)
    Q_DISABLE_COPY(GetTemplateSyncStatusResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
