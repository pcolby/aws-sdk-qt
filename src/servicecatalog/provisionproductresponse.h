// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONPRODUCTRESPONSE_H
#define QTAWS_PROVISIONPRODUCTRESPONSE_H

#include "servicecatalogresponse.h"
#include "provisionproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ProvisionProductResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ProvisionProductResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ProvisionProductResponse(const ProvisionProductRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ProvisionProductRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProvisionProductResponse)
    Q_DISABLE_COPY(ProvisionProductResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
