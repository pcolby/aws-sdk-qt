// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPERMISSIONSRESPONSE_P_H
#define QTAWS_UPDATEPERMISSIONSRESPONSE_P_H

#include "grafanaresponse_p.h"

namespace QtAws {
namespace Grafana {

class UpdatePermissionsResponse;

class UpdatePermissionsResponsePrivate : public GrafanaResponsePrivate {

public:

    explicit UpdatePermissionsResponsePrivate(UpdatePermissionsResponse * const q);

    void parseUpdatePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePermissionsResponse)
    Q_DISABLE_COPY(UpdatePermissionsResponsePrivate)

};

} // namespace Grafana
} // namespace QtAws

#endif
