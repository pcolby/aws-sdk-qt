// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONEDPRODUCTPLANSRESPONSE_H
#define QTAWS_LISTPROVISIONEDPRODUCTPLANSRESPONSE_H

#include "servicecatalogresponse.h"
#include "listprovisionedproductplansrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListProvisionedProductPlansResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListProvisionedProductPlansResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListProvisionedProductPlansResponse(const ListProvisionedProductPlansRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProvisionedProductPlansRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProvisionedProductPlansResponse)
    Q_DISABLE_COPY(ListProvisionedProductPlansResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
