// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROVISIONEDPRODUCTOUTPUTSREQUEST_H
#define QTAWS_GETPROVISIONEDPRODUCTOUTPUTSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class GetProvisionedProductOutputsRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT GetProvisionedProductOutputsRequest : public ServiceCatalogRequest {

public:
    GetProvisionedProductOutputsRequest(const GetProvisionedProductOutputsRequest &other);
    GetProvisionedProductOutputsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProvisionedProductOutputsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
