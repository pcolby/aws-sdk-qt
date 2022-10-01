// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCESETRESPONSE_P_H
#define QTAWS_UPDATERESOURCESETRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class UpdateResourceSetResponse;

class UpdateResourceSetResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit UpdateResourceSetResponsePrivate(UpdateResourceSetResponse * const q);

    void parseUpdateResourceSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResourceSetResponse)
    Q_DISABLE_COPY(UpdateResourceSetResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
