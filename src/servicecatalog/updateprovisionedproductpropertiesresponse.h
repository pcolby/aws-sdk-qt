// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONEDPRODUCTPROPERTIESRESPONSE_H
#define QTAWS_UPDATEPROVISIONEDPRODUCTPROPERTIESRESPONSE_H

#include "servicecatalogresponse.h"
#include "updateprovisionedproductpropertiesrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateProvisionedProductPropertiesResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT UpdateProvisionedProductPropertiesResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    UpdateProvisionedProductPropertiesResponse(const UpdateProvisionedProductPropertiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateProvisionedProductPropertiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProvisionedProductPropertiesResponse)
    Q_DISABLE_COPY(UpdateProvisionedProductPropertiesResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
