// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIMENSIONVALUESREQUEST_P_H
#define QTAWS_GETDIMENSIONVALUESREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getdimensionvaluesrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetDimensionValuesRequest;

class GetDimensionValuesRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetDimensionValuesRequestPrivate(const CostExplorerRequest::Action action,
                                   GetDimensionValuesRequest * const q);
    GetDimensionValuesRequestPrivate(const GetDimensionValuesRequestPrivate &other,
                                   GetDimensionValuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDimensionValuesRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
