// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSCOVERAGEREQUEST_P_H
#define QTAWS_GETSAVINGSPLANSCOVERAGEREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getsavingsplanscoveragerequest.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansCoverageRequest;

class GetSavingsPlansCoverageRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetSavingsPlansCoverageRequestPrivate(const CostExplorerRequest::Action action,
                                   GetSavingsPlansCoverageRequest * const q);
    GetSavingsPlansCoverageRequestPrivate(const GetSavingsPlansCoverageRequestPrivate &other,
                                   GetSavingsPlansCoverageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSavingsPlansCoverageRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
