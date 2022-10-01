// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOSTALLOCATIONTAGSSTATUSREQUEST_H
#define QTAWS_UPDATECOSTALLOCATIONTAGSSTATUSREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class UpdateCostAllocationTagsStatusRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT UpdateCostAllocationTagsStatusRequest : public CostExplorerRequest {

public:
    UpdateCostAllocationTagsStatusRequest(const UpdateCostAllocationTagsStatusRequest &other);
    UpdateCostAllocationTagsStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCostAllocationTagsStatusRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
