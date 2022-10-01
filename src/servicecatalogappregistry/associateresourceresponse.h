// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOURCERESPONSE_H
#define QTAWS_ASSOCIATERESOURCERESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "associateresourcerequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class AssociateResourceResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT AssociateResourceResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    AssociateResourceResponse(const AssociateResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateResourceResponse)
    Q_DISABLE_COPY(AssociateResourceResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
