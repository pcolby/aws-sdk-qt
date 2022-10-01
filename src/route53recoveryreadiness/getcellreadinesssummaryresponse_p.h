// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELLREADINESSSUMMARYRESPONSE_P_H
#define QTAWS_GETCELLREADINESSSUMMARYRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class GetCellReadinessSummaryResponse;

class GetCellReadinessSummaryResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit GetCellReadinessSummaryResponsePrivate(GetCellReadinessSummaryResponse * const q);

    void parseGetCellReadinessSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCellReadinessSummaryResponse)
    Q_DISABLE_COPY(GetCellReadinessSummaryResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
