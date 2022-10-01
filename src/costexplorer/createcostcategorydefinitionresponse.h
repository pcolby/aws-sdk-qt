// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOSTCATEGORYDEFINITIONRESPONSE_H
#define QTAWS_CREATECOSTCATEGORYDEFINITIONRESPONSE_H

#include "costexplorerresponse.h"
#include "createcostcategorydefinitionrequest.h"

namespace QtAws {
namespace CostExplorer {

class CreateCostCategoryDefinitionResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT CreateCostCategoryDefinitionResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    CreateCostCategoryDefinitionResponse(const CreateCostCategoryDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCostCategoryDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCostCategoryDefinitionResponse)
    Q_DISABLE_COPY(CreateCostCategoryDefinitionResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
