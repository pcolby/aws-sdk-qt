// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEACTIONSFORPROVISIONINGARTIFACTRESPONSE_H
#define QTAWS_LISTSERVICEACTIONSFORPROVISIONINGARTIFACTRESPONSE_H

#include "servicecatalogresponse.h"
#include "listserviceactionsforprovisioningartifactrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListServiceActionsForProvisioningArtifactResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListServiceActionsForProvisioningArtifactResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListServiceActionsForProvisioningArtifactResponse(const ListServiceActionsForProvisioningArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServiceActionsForProvisioningArtifactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceActionsForProvisioningArtifactResponse)
    Q_DISABLE_COPY(ListServiceActionsForProvisioningArtifactResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
