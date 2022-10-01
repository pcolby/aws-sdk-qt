// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOSTCATEGORYDEFINITIONRESPONSE_H
#define QTAWS_DESCRIBECOSTCATEGORYDEFINITIONRESPONSE_H

#include "costexplorerresponse.h"
#include "describecostcategorydefinitionrequest.h"

namespace QtAws {
namespace CostExplorer {

class DescribeCostCategoryDefinitionResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT DescribeCostCategoryDefinitionResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    DescribeCostCategoryDefinitionResponse(const DescribeCostCategoryDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCostCategoryDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCostCategoryDefinitionResponse)
    Q_DISABLE_COPY(DescribeCostCategoryDefinitionResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
