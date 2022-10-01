// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEBUDGETFROMRESOURCERESPONSE_H
#define QTAWS_DISASSOCIATEBUDGETFROMRESOURCERESPONSE_H

#include "servicecatalogresponse.h"
#include "disassociatebudgetfromresourcerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateBudgetFromResourceResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DisassociateBudgetFromResourceResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DisassociateBudgetFromResourceResponse(const DisassociateBudgetFromResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateBudgetFromResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateBudgetFromResourceResponse)
    Q_DISABLE_COPY(DisassociateBudgetFromResourceResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
