// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVATIONCOVERAGEREQUEST_P_H
#define QTAWS_GETRESERVATIONCOVERAGEREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getreservationcoveragerequest.h"

namespace QtAws {
namespace CostExplorer {

class GetReservationCoverageRequest;

class GetReservationCoverageRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetReservationCoverageRequestPrivate(const CostExplorerRequest::Action action,
                                   GetReservationCoverageRequest * const q);
    GetReservationCoverageRequestPrivate(const GetReservationCoverageRequestPrivate &other,
                                   GetReservationCoverageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReservationCoverageRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
