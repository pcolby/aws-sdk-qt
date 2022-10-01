// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVATIONUTILIZATIONREQUEST_P_H
#define QTAWS_GETRESERVATIONUTILIZATIONREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getreservationutilizationrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetReservationUtilizationRequest;

class GetReservationUtilizationRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetReservationUtilizationRequestPrivate(const CostExplorerRequest::Action action,
                                   GetReservationUtilizationRequest * const q);
    GetReservationUtilizationRequestPrivate(const GetReservationUtilizationRequestPrivate &other,
                                   GetReservationUtilizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReservationUtilizationRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
