// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCELLSRESPONSE_P_H
#define QTAWS_LISTCELLSRESPONSE_P_H

#include "route53recoveryreadinessresponse_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListCellsResponse;

class ListCellsResponsePrivate : public Route53RecoveryReadinessResponsePrivate {

public:

    explicit ListCellsResponsePrivate(ListCellsResponse * const q);

    void parseListCellsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCellsResponse)
    Q_DISABLE_COPY(ListCellsResponsePrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
