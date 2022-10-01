// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUDGETSFORRESOURCERESPONSE_P_H
#define QTAWS_LISTBUDGETSFORRESOURCERESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListBudgetsForResourceResponse;

class ListBudgetsForResourceResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListBudgetsForResourceResponsePrivate(ListBudgetsForResourceResponse * const q);

    void parseListBudgetsForResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBudgetsForResourceResponse)
    Q_DISABLE_COPY(ListBudgetsForResourceResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
