// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOSTCATEGORYDEFINITIONSREQUEST_H
#define QTAWS_LISTCOSTCATEGORYDEFINITIONSREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class ListCostCategoryDefinitionsRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT ListCostCategoryDefinitionsRequest : public CostExplorerRequest {

public:
    ListCostCategoryDefinitionsRequest(const ListCostCategoryDefinitionsRequest &other);
    ListCostCategoryDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCostCategoryDefinitionsRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
