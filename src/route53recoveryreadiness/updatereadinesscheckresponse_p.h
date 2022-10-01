// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREADINESSCHECKRESPONSE_P_H
#define QTAWS_UPDATEREADINESSCHECKRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateReadinessCheckResponse;

class UpdateReadinessCheckResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit UpdateReadinessCheckResponsePrivate(UpdateReadinessCheckResponse * const q);

    void parseUpdateReadinessCheckResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateReadinessCheckResponse)
    Q_DISABLE_COPY(UpdateReadinessCheckResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
