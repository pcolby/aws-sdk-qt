// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONINGARTIFACTSFORSERVICEACTIONRESPONSE_H
#define QTAWS_LISTPROVISIONINGARTIFACTSFORSERVICEACTIONRESPONSE_H

#include "servicecatalogresponse.h"
#include "listprovisioningartifactsforserviceactionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListProvisioningArtifactsForServiceActionResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListProvisioningArtifactsForServiceActionResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListProvisioningArtifactsForServiceActionResponse(const ListProvisioningArtifactsForServiceActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProvisioningArtifactsForServiceActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProvisioningArtifactsForServiceActionResponse)
    Q_DISABLE_COPY(ListProvisioningArtifactsForServiceActionResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
