// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESETSRESPONSE_P_H
#define QTAWS_LISTRESOURCESETSRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListResourceSetsResponse;

class ListResourceSetsResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit ListResourceSetsResponsePrivate(ListResourceSetsResponse * const q);

    void parseListResourceSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourceSetsResponse)
    Q_DISABLE_COPY(ListResourceSetsResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
