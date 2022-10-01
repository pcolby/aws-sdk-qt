// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUDITSUPPRESSIONRESPONSE_P_H
#define QTAWS_UPDATEAUDITSUPPRESSIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateAuditSuppressionResponse;

class UpdateAuditSuppressionResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateAuditSuppressionResponsePrivate(UpdateAuditSuppressionResponse * const q);

    void parseUpdateAuditSuppressionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAuditSuppressionResponse)
    Q_DISABLE_COPY(UpdateAuditSuppressionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
