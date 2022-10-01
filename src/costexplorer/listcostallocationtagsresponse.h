// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOSTALLOCATIONTAGSRESPONSE_H
#define QTAWS_LISTCOSTALLOCATIONTAGSRESPONSE_H

#include "costexplorerresponse.h"
#include "listcostallocationtagsrequest.h"

namespace QtAws {
namespace CostExplorer {

class ListCostAllocationTagsResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT ListCostAllocationTagsResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    ListCostAllocationTagsResponse(const ListCostAllocationTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCostAllocationTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCostAllocationTagsResponse)
    Q_DISABLE_COPY(ListCostAllocationTagsResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
