// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOSTCATEGORYDEFINITIONRESPONSE_H
#define QTAWS_UPDATECOSTCATEGORYDEFINITIONRESPONSE_H

#include "costexplorerresponse.h"
#include "updatecostcategorydefinitionrequest.h"

namespace QtAws {
namespace CostExplorer {

class UpdateCostCategoryDefinitionResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT UpdateCostCategoryDefinitionResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    UpdateCostCategoryDefinitionResponse(const UpdateCostCategoryDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCostCategoryDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCostCategoryDefinitionResponse)
    Q_DISABLE_COPY(UpdateCostCategoryDefinitionResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
