// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSRESPONSE_P_H
#define QTAWS_LISTPERMISSIONSRESPONSE_P_H

#include "grafanaresponse_p.h"

namespace QtAws {
namespace Grafana {

class ListPermissionsResponse;

class ListPermissionsResponsePrivate : public GrafanaResponsePrivate {

public:

    explicit ListPermissionsResponsePrivate(ListPermissionsResponse * const q);

    void parseListPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPermissionsResponse)
    Q_DISABLE_COPY(ListPermissionsResponsePrivate)

};

} // namespace Grafana
} // namespace QtAws

#endif
