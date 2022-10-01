// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELAUDITTASKRESPONSE_P_H
#define QTAWS_CANCELAUDITTASKRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CancelAuditTaskResponse;

class CancelAuditTaskResponsePrivate : public IoTResponsePrivate {

public:

    explicit CancelAuditTaskResponsePrivate(CancelAuditTaskResponse * const q);

    void parseCancelAuditTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelAuditTaskResponse)
    Q_DISABLE_COPY(CancelAuditTaskResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
