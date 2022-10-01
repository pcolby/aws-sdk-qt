// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOSTALLOCATIONTAGSREQUEST_H
#define QTAWS_LISTCOSTALLOCATIONTAGSREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class ListCostAllocationTagsRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT ListCostAllocationTagsRequest : public CostExplorerRequest {

public:
    ListCostAllocationTagsRequest(const ListCostAllocationTagsRequest &other);
    ListCostAllocationTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCostAllocationTagsRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
