// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGARTIFACTSREQUEST_H
#define QTAWS_LISTPROVISIONINGARTIFACTSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListProvisioningArtifactsRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListProvisioningArtifactsRequest : public ServiceCatalogRequest {

public:
    ListProvisioningArtifactsRequest(const ListProvisioningArtifactsRequest &other);
    ListProvisioningArtifactsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProvisioningArtifactsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
