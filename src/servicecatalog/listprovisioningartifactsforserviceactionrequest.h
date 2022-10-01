// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGARTIFACTSFORSERVICEACTIONREQUEST_H
#define QTAWS_LISTPROVISIONINGARTIFACTSFORSERVICEACTIONREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListProvisioningArtifactsForServiceActionRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListProvisioningArtifactsForServiceActionRequest : public ServiceCatalogRequest {

public:
    ListProvisioningArtifactsForServiceActionRequest(const ListProvisioningArtifactsForServiceActionRequest &other);
    ListProvisioningArtifactsForServiceActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProvisioningArtifactsForServiceActionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
