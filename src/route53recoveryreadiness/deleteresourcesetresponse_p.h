// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESETRESPONSE_P_H
#define QTAWS_DELETERESOURCESETRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class DeleteResourceSetResponse;

class DeleteResourceSetResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit DeleteResourceSetResponsePrivate(DeleteResourceSetResponse * const q);

    void parseDeleteResourceSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResourceSetResponse)
    Q_DISABLE_COPY(DeleteResourceSetResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
