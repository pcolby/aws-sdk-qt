// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITTASKSRESPONSE_P_H
#define QTAWS_LISTAUDITTASKSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListAuditTasksResponse;

class ListAuditTasksResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListAuditTasksResponsePrivate(ListAuditTasksResponse * const q);

    void parseListAuditTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAuditTasksResponse)
    Q_DISABLE_COPY(ListAuditTasksResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
