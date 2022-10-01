// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTMITIGATIONACTIONSTASKSRESPONSE_P_H
#define QTAWS_LISTDETECTMITIGATIONACTIONSTASKSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListDetectMitigationActionsTasksResponse;

class ListDetectMitigationActionsTasksResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListDetectMitigationActionsTasksResponsePrivate(ListDetectMitigationActionsTasksResponse * const q);

    void parseListDetectMitigationActionsTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDetectMitigationActionsTasksResponse)
    Q_DISABLE_COPY(ListDetectMitigationActionsTasksResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
