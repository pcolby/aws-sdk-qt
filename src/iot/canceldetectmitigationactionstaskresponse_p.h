// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDETECTMITIGATIONACTIONSTASKRESPONSE_P_H
#define QTAWS_CANCELDETECTMITIGATIONACTIONSTASKRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CancelDetectMitigationActionsTaskResponse;

class CancelDetectMitigationActionsTaskResponsePrivate : public IoTResponsePrivate {

public:

    explicit CancelDetectMitigationActionsTaskResponsePrivate(CancelDetectMitigationActionsTaskResponse * const q);

    void parseCancelDetectMitigationActionsTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelDetectMitigationActionsTaskResponse)
    Q_DISABLE_COPY(CancelDetectMitigationActionsTaskResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
