// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONINGARTIFACTRESPONSE_H
#define QTAWS_DELETEPROVISIONINGARTIFACTRESPONSE_H

#include "servicecatalogresponse.h"
#include "deleteprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteProvisioningArtifactResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DeleteProvisioningArtifactResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DeleteProvisioningArtifactResponse(const DeleteProvisioningArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProvisioningArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProvisioningArtifactResponse)
    Q_DISABLE_COPY(DeleteProvisioningArtifactResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
