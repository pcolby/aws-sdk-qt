// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDETECTMITIGATIONACTIONSTASKRESPONSE_P_H
#define QTAWS_STARTDETECTMITIGATIONACTIONSTASKRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class StartDetectMitigationActionsTaskResponse;

class StartDetectMitigationActionsTaskResponsePrivate : public IoTResponsePrivate {

public:

    explicit StartDetectMitigationActionsTaskResponsePrivate(StartDetectMitigationActionsTaskResponse * const q);

    void parseStartDetectMitigationActionsTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDetectMitigationActionsTaskResponse)
    Q_DISABLE_COPY(StartDetectMitigationActionsTaskResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
