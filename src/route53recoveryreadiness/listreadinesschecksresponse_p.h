// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREADINESSCHECKSRESPONSE_P_H
#define QTAWS_LISTREADINESSCHECKSRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListReadinessChecksResponse;

class ListReadinessChecksResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit ListReadinessChecksResponsePrivate(ListReadinessChecksResponse * const q);

    void parseListReadinessChecksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReadinessChecksResponse)
    Q_DISABLE_COPY(ListReadinessChecksResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
