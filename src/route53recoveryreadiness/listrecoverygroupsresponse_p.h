// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYGROUPSRESPONSE_P_H
#define QTAWS_LISTRECOVERYGROUPSRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListRecoveryGroupsResponse;

class ListRecoveryGroupsResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit ListRecoveryGroupsResponsePrivate(ListRecoveryGroupsResponse * const q);

    void parseListRecoveryGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRecoveryGroupsResponse)
    Q_DISABLE_COPY(ListRecoveryGroupsResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
