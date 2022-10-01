// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPENDINGMAINTENANCEACTIONSREQUEST_P_H
#define QTAWS_DESCRIBEPENDINGMAINTENANCEACTIONSREQUEST_P_H

#include "docdbrequest_p.h"
#include "describependingmaintenanceactionsrequest.h"

namespace QtAws {
namespace DocDb {

class DescribePendingMaintenanceActionsRequest;

class DescribePendingMaintenanceActionsRequestPrivate : public DocDbRequestPrivate {

public:
    DescribePendingMaintenanceActionsRequestPrivate(const DocDbRequest::Action action,
                                   DescribePendingMaintenanceActionsRequest * const q);
    DescribePendingMaintenanceActionsRequestPrivate(const DescribePendingMaintenanceActionsRequestPrivate &other,
                                   DescribePendingMaintenanceActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePendingMaintenanceActionsRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
