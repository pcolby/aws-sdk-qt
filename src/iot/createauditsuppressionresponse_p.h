// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUDITSUPPRESSIONRESPONSE_P_H
#define QTAWS_CREATEAUDITSUPPRESSIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateAuditSuppressionResponse;

class CreateAuditSuppressionResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateAuditSuppressionResponsePrivate(CreateAuditSuppressionResponse * const q);

    void parseCreateAuditSuppressionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAuditSuppressionResponse)
    Q_DISABLE_COPY(CreateAuditSuppressionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
