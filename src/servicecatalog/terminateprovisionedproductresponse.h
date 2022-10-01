// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEPROVISIONEDPRODUCTRESPONSE_H
#define QTAWS_TERMINATEPROVISIONEDPRODUCTRESPONSE_H

#include "servicecatalogresponse.h"
#include "terminateprovisionedproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class TerminateProvisionedProductResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT TerminateProvisionedProductResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    TerminateProvisionedProductResponse(const TerminateProvisionedProductRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TerminateProvisionedProductRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateProvisionedProductResponse)
    Q_DISABLE_COPY(TerminateProvisionedProductResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
