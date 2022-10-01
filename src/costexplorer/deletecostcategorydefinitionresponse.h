// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOSTCATEGORYDEFINITIONRESPONSE_H
#define QTAWS_DELETECOSTCATEGORYDEFINITIONRESPONSE_H

#include "costexplorerresponse.h"
#include "deletecostcategorydefinitionrequest.h"

namespace QtAws {
namespace CostExplorer {

class DeleteCostCategoryDefinitionResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT DeleteCostCategoryDefinitionResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    DeleteCostCategoryDefinitionResponse(const DeleteCostCategoryDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCostCategoryDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCostCategoryDefinitionResponse)
    Q_DISABLE_COPY(DeleteCostCategoryDefinitionResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
