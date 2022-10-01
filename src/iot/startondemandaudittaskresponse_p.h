// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTONDEMANDAUDITTASKRESPONSE_P_H
#define QTAWS_STARTONDEMANDAUDITTASKRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class StartOnDemandAuditTaskResponse;

class StartOnDemandAuditTaskResponsePrivate : public IoTResponsePrivate {

public:

    explicit StartOnDemandAuditTaskResponsePrivate(StartOnDemandAuditTaskResponse * const q);

    void parseStartOnDemandAuditTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartOnDemandAuditTaskResponse)
    Q_DISABLE_COPY(StartOnDemandAuditTaskResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
