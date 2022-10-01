// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOSTALLOCATIONTAGSSTATUSRESPONSE_H
#define QTAWS_UPDATECOSTALLOCATIONTAGSSTATUSRESPONSE_H

#include "costexplorerresponse.h"
#include "updatecostallocationtagsstatusrequest.h"

namespace QtAws {
namespace CostExplorer {

class UpdateCostAllocationTagsStatusResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT UpdateCostAllocationTagsStatusResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    UpdateCostAllocationTagsStatusResponse(const UpdateCostAllocationTagsStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCostAllocationTagsStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCostAllocationTagsStatusResponse)
    Q_DISABLE_COPY(UpdateCostAllocationTagsStatusResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
