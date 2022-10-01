// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOSTCATEGORYDEFINITIONSRESPONSE_H
#define QTAWS_LISTCOSTCATEGORYDEFINITIONSRESPONSE_H

#include "costexplorerresponse.h"
#include "listcostcategorydefinitionsrequest.h"

namespace QtAws {
namespace CostExplorer {

class ListCostCategoryDefinitionsResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT ListCostCategoryDefinitionsResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    ListCostCategoryDefinitionsResponse(const ListCostCategoryDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCostCategoryDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCostCategoryDefinitionsResponse)
    Q_DISABLE_COPY(ListCostCategoryDefinitionsResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
