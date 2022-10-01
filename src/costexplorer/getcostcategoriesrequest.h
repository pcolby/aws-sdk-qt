// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTCATEGORIESREQUEST_H
#define QTAWS_GETCOSTCATEGORIESREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetCostCategoriesRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetCostCategoriesRequest : public CostExplorerRequest {

public:
    GetCostCategoriesRequest(const GetCostCategoriesRequest &other);
    GetCostCategoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCostCategoriesRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
