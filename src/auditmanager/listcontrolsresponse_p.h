// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTROLSRESPONSE_P_H
#define QTAWS_LISTCONTROLSRESPONSE_P_H

#include "auditmanagerresponse_p.h"

namespace QtAws {
namespace AuditManager {

class ListControlsResponse;

class ListControlsResponsePrivate : public AuditManagerResponsePrivate {

public:

    explicit ListControlsResponsePrivate(ListControlsResponse * const q);

    void parseListControlsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListControlsResponse)
    Q_DISABLE_COPY(ListControlsResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
