// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONINGARTIFACTREQUEST_H
#define QTAWS_UPDATEPROVISIONINGARTIFACTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateProvisioningArtifactRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT UpdateProvisioningArtifactRequest : public ServiceCatalogRequest {

public:
    UpdateProvisioningArtifactRequest(const UpdateProvisioningArtifactRequest &other);
    UpdateProvisioningArtifactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
