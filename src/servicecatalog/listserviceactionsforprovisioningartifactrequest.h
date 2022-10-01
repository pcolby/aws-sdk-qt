// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEACTIONSFORPROVISIONINGARTIFACTREQUEST_H
#define QTAWS_LISTSERVICEACTIONSFORPROVISIONINGARTIFACTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListServiceActionsForProvisioningArtifactRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListServiceActionsForProvisioningArtifactRequest : public ServiceCatalogRequest {

public:
    ListServiceActionsForProvisioningArtifactRequest(const ListServiceActionsForProvisioningArtifactRequest &other);
    ListServiceActionsForProvisioningArtifactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceActionsForProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
