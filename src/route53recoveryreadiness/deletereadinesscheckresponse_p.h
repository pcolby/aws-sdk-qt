// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREADINESSCHECKRESPONSE_P_H
#define QTAWS_DELETEREADINESSCHECKRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteReadinessCheckResponse;

class DeleteReadinessCheckResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit DeleteReadinessCheckResponsePrivate(DeleteReadinessCheckResponse * const q);

    void parseDeleteReadinessCheckResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReadinessCheckResponse)
    Q_DISABLE_COPY(DeleteReadinessCheckResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
