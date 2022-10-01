// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOSTCATEGORYDEFINITIONREQUEST_H
#define QTAWS_DESCRIBECOSTCATEGORYDEFINITIONREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class DescribeCostCategoryDefinitionRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT DescribeCostCategoryDefinitionRequest : public CostExplorerRequest {

public:
    DescribeCostCategoryDefinitionRequest(const DescribeCostCategoryDefinitionRequest &other);
    DescribeCostCategoryDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCostCategoryDefinitionRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
