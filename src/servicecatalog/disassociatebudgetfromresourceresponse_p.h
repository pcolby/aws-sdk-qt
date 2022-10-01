// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEBUDGETFROMRESOURCERESPONSE_P_H
#define QTAWS_DISASSOCIATEBUDGETFROMRESOURCERESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateBudgetFromResourceResponse;

class DisassociateBudgetFromResourceResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DisassociateBudgetFromResourceResponsePrivate(DisassociateBudgetFromResourceResponse * const q);

    void parseDisassociateBudgetFromResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateBudgetFromResourceResponse)
    Q_DISABLE_COPY(DisassociateBudgetFromResourceResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
