// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEBUDGETWITHRESOURCERESPONSE_P_H
#define QTAWS_ASSOCIATEBUDGETWITHRESOURCERESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociateBudgetWithResourceResponse;

class AssociateBudgetWithResourceResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit AssociateBudgetWithResourceResponsePrivate(AssociateBudgetWithResourceResponse * const q);

    void parseAssociateBudgetWithResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateBudgetWithResourceResponse)
    Q_DISABLE_COPY(AssociateBudgetWithResourceResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
