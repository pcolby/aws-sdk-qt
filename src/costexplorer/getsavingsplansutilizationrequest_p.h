// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSUTILIZATIONREQUEST_P_H
#define QTAWS_GETSAVINGSPLANSUTILIZATIONREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getsavingsplansutilizationrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansUtilizationRequest;

class GetSavingsPlansUtilizationRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetSavingsPlansUtilizationRequestPrivate(const CostExplorerRequest::Action action,
                                   GetSavingsPlansUtilizationRequest * const q);
    GetSavingsPlansUtilizationRequestPrivate(const GetSavingsPlansUtilizationRequestPrivate &other,
                                   GetSavingsPlansUtilizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSavingsPlansUtilizationRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
