// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDROUTE53HEALTHCHECKSRESPONSE_P_H
#define QTAWS_LISTASSOCIATEDROUTE53HEALTHCHECKSRESPONSE_P_H

#include "route53recoverycontrolconfigresponse_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListAssociatedRoute53HealthChecksResponse;

class ListAssociatedRoute53HealthChecksResponsePrivate : public Route53RecoveryControlConfigResponsePrivate {

public:

    explicit ListAssociatedRoute53HealthChecksResponsePrivate(ListAssociatedRoute53HealthChecksResponse * const q);

    void parseListAssociatedRoute53HealthChecksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssociatedRoute53HealthChecksResponse)
    Q_DISABLE_COPY(ListAssociatedRoute53HealthChecksResponsePrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
