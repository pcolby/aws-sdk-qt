// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYSYNCSTATUSRESPONSE_P_H
#define QTAWS_GETREPOSITORYSYNCSTATUSRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class GetRepositorySyncStatusResponse;

class GetRepositorySyncStatusResponsePrivate : public ProtonResponsePrivate {

public:

    explicit GetRepositorySyncStatusResponsePrivate(GetRepositorySyncStatusResponse * const q);

    void parseGetRepositorySyncStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRepositorySyncStatusResponse)
    Q_DISABLE_COPY(GetRepositorySyncStatusResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
