// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESERVICEACTIONFROMPROVISIONINGARTIFACTRESPONSE_H
#define QTAWS_DISASSOCIATESERVICEACTIONFROMPROVISIONINGARTIFACTRESPONSE_H

#include "servicecatalogresponse.h"
#include "disassociateserviceactionfromprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateServiceActionFromProvisioningArtifactResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DisassociateServiceActionFromProvisioningArtifactResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DisassociateServiceActionFromProvisioningArtifactResponse(const DisassociateServiceActionFromProvisioningArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateServiceActionFromProvisioningArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateServiceActionFromProvisioningArtifactResponse)
    Q_DISABLE_COPY(DisassociateServiceActionFromProvisioningArtifactResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
