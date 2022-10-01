// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTCATEGORIESRESPONSE_H
#define QTAWS_GETCOSTCATEGORIESRESPONSE_H

#include "costexplorerresponse.h"
#include "getcostcategoriesrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetCostCategoriesResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetCostCategoriesResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetCostCategoriesResponse(const GetCostCategoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCostCategoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCostCategoriesResponse)
    Q_DISABLE_COPY(GetCostCategoriesResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
