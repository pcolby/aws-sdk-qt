// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONINGARTIFACTRESPONSE_H
#define QTAWS_UPDATEPROVISIONINGARTIFACTRESPONSE_H

#include "servicecatalogresponse.h"
#include "updateprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateProvisioningArtifactResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT UpdateProvisioningArtifactResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    UpdateProvisioningArtifactResponse(const UpdateProvisioningArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateProvisioningArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProvisioningArtifactResponse)
    Q_DISABLE_COPY(UpdateProvisioningArtifactResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
