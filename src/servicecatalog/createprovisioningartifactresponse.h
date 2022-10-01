// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONINGARTIFACTRESPONSE_H
#define QTAWS_CREATEPROVISIONINGARTIFACTRESPONSE_H

#include "servicecatalogresponse.h"
#include "createprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateProvisioningArtifactResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT CreateProvisioningArtifactResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    CreateProvisioningArtifactResponse(const CreateProvisioningArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProvisioningArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProvisioningArtifactResponse)
    Q_DISABLE_COPY(CreateProvisioningArtifactResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
