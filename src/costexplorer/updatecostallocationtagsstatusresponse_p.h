// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOSTALLOCATIONTAGSSTATUSRESPONSE_P_H
#define QTAWS_UPDATECOSTALLOCATIONTAGSSTATUSRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class UpdateCostAllocationTagsStatusResponse;

class UpdateCostAllocationTagsStatusResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit UpdateCostAllocationTagsStatusResponsePrivate(UpdateCostAllocationTagsStatusResponse * const q);

    void parseUpdateCostAllocationTagsStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCostAllocationTagsStatusResponse)
    Q_DISABLE_COPY(UpdateCostAllocationTagsStatusResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
