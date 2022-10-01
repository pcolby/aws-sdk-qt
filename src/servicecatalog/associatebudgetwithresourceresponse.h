// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEBUDGETWITHRESOURCERESPONSE_H
#define QTAWS_ASSOCIATEBUDGETWITHRESOURCERESPONSE_H

#include "servicecatalogresponse.h"
#include "associatebudgetwithresourcerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociateBudgetWithResourceResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT AssociateBudgetWithResourceResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    AssociateBudgetWithResourceResponse(const AssociateBudgetWithResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateBudgetWithResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateBudgetWithResourceResponse)
    Q_DISABLE_COPY(AssociateBudgetWithResourceResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
