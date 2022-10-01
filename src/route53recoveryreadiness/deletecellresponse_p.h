// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECELLRESPONSE_P_H
#define QTAWS_DELETECELLRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteCellResponse;

class DeleteCellResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit DeleteCellResponsePrivate(DeleteCellResponse * const q);

    void parseDeleteCellResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCellResponse)
    Q_DISABLE_COPY(DeleteCellResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
