// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGARTIFACTSRESPONSE_H
#define QTAWS_LISTPROVISIONINGARTIFACTSRESPONSE_H

#include "servicecatalogresponse.h"
#include "listprovisioningartifactsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListProvisioningArtifactsResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListProvisioningArtifactsResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListProvisioningArtifactsResponse(const ListProvisioningArtifactsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProvisioningArtifactsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProvisioningArtifactsResponse)
    Q_DISABLE_COPY(ListProvisioningArtifactsResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
