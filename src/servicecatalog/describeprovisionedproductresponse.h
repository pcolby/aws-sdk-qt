// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONEDPRODUCTRESPONSE_H
#define QTAWS_DESCRIBEPROVISIONEDPRODUCTRESPONSE_H

#include "servicecatalogresponse.h"
#include "describeprovisionedproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProvisionedProductResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DescribeProvisionedProductResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribeProvisionedProductResponse(const DescribeProvisionedProductRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeProvisionedProductRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProvisionedProductResponse)
    Q_DISABLE_COPY(DescribeProvisionedProductResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
