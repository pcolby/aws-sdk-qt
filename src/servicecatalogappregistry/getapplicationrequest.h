// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONREQUEST_H
#define QTAWS_GETAPPLICATIONREQUEST_H

#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class GetApplicationRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT GetApplicationRequest : public ServiceCatalogAppRegistryRequest {

public:
    GetApplicationRequest(const GetApplicationRequest &other);
    GetApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
