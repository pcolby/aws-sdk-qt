// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECELLRESPONSE_P_H
#define QTAWS_CREATECELLRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class CreateCellResponse;

class CreateCellResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit CreateCellResponsePrivate(CreateCellResponse * const q);

    void parseCreateCellResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCellResponse)
    Q_DISABLE_COPY(CreateCellResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
