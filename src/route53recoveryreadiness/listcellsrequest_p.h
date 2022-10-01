// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCELLSREQUEST_P_H
#define QTAWS_LISTCELLSREQUEST_P_H

#include "route53recoveryreadinessrequest_p.h"
#include "listcellsrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListCellsRequest;

class ListCellsRequestPrivate : public Route53RecoveryReadinessRequestPrivate {

public:
    ListCellsRequestPrivate(const Route53RecoveryReadinessRequest::Action action,
                                   ListCellsRequest * const q);
    ListCellsRequestPrivate(const ListCellsRequestPrivate &other,
                                   ListCellsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCellsRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
