// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCESETRESPONSE_P_H
#define QTAWS_CREATERESOURCESETRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateResourceSetResponse;

class CreateResourceSetResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit CreateResourceSetResponsePrivate(CreateResourceSetResponse * const q);

    void parseCreateResourceSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResourceSetResponse)
    Q_DISABLE_COPY(CreateResourceSetResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
