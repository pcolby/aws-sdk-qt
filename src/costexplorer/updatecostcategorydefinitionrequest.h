// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOSTCATEGORYDEFINITIONREQUEST_H
#define QTAWS_UPDATECOSTCATEGORYDEFINITIONREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class UpdateCostCategoryDefinitionRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT UpdateCostCategoryDefinitionRequest : public CostExplorerRequest {

public:
    UpdateCostCategoryDefinitionRequest(const UpdateCostCategoryDefinitionRequest &other);
    UpdateCostCategoryDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCostCategoryDefinitionRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
