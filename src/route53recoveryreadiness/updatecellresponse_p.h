// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECELLRESPONSE_P_H
#define QTAWS_UPDATECELLRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateCellResponse;

class UpdateCellResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit UpdateCellResponsePrivate(UpdateCellResponse * const q);

    void parseUpdateCellResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCellResponse)
    Q_DISABLE_COPY(UpdateCellResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
