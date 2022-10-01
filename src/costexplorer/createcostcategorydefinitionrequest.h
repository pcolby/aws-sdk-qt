// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOSTCATEGORYDEFINITIONREQUEST_H
#define QTAWS_CREATECOSTCATEGORYDEFINITIONREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class CreateCostCategoryDefinitionRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT CreateCostCategoryDefinitionRequest : public CostExplorerRequest {

public:
    CreateCostCategoryDefinitionRequest(const CreateCostCategoryDefinitionRequest &other);
    CreateCostCategoryDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCostCategoryDefinitionRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
