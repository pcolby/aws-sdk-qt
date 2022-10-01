// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOSTCATEGORYDEFINITIONREQUEST_H
#define QTAWS_DELETECOSTCATEGORYDEFINITIONREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class DeleteCostCategoryDefinitionRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT DeleteCostCategoryDefinitionRequest : public CostExplorerRequest {

public:
    DeleteCostCategoryDefinitionRequest(const DeleteCostCategoryDefinitionRequest &other);
    DeleteCostCategoryDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCostCategoryDefinitionRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
