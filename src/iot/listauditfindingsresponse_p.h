// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITFINDINGSRESPONSE_P_H
#define QTAWS_LISTAUDITFINDINGSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListAuditFindingsResponse;

class ListAuditFindingsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListAuditFindingsResponsePrivate(ListAuditFindingsResponse * const q);

    void parseListAuditFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAuditFindingsResponse)
    Q_DISABLE_COPY(ListAuditFindingsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
