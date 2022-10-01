// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSUTILIZATIONDETAILSREQUEST_P_H
#define QTAWS_GETSAVINGSPLANSUTILIZATIONDETAILSREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getsavingsplansutilizationdetailsrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansUtilizationDetailsRequest;

class GetSavingsPlansUtilizationDetailsRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetSavingsPlansUtilizationDetailsRequestPrivate(const CostExplorerRequest::Action action,
                                   GetSavingsPlansUtilizationDetailsRequest * const q);
    GetSavingsPlansUtilizationDetailsRequestPrivate(const GetSavingsPlansUtilizationDetailsRequestPrivate &other,
                                   GetSavingsPlansUtilizationDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSavingsPlansUtilizationDetailsRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
