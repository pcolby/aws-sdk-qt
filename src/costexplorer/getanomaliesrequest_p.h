// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALIESREQUEST_P_H
#define QTAWS_GETANOMALIESREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getanomaliesrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetAnomaliesRequest;

class GetAnomaliesRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetAnomaliesRequestPrivate(const CostExplorerRequest::Action action,
                                   GetAnomaliesRequest * const q);
    GetAnomaliesRequestPrivate(const GetAnomaliesRequestPrivate &other,
                                   GetAnomaliesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAnomaliesRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
