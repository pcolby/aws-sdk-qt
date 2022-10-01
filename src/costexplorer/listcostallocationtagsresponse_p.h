// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOSTALLOCATIONTAGSRESPONSE_P_H
#define QTAWS_LISTCOSTALLOCATIONTAGSRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class ListCostAllocationTagsResponse;

class ListCostAllocationTagsResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit ListCostAllocationTagsResponsePrivate(ListCostAllocationTagsResponse * const q);

    void parseListCostAllocationTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCostAllocationTagsResponse)
    Q_DISABLE_COPY(ListCostAllocationTagsResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
