// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESETRESPONSE_P_H
#define QTAWS_GETRESOURCESETRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetResourceSetResponse;

class GetResourceSetResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit GetResourceSetResponsePrivate(GetResourceSetResponse * const q);

    void parseGetResourceSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceSetResponse)
    Q_DISABLE_COPY(GetResourceSetResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
