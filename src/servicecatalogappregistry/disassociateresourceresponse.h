// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOURCERESPONSE_H
#define QTAWS_DISASSOCIATERESOURCERESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "disassociateresourcerequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class DisassociateResourceResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT DisassociateResourceResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    DisassociateResourceResponse(const DisassociateResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateResourceResponse)
    Q_DISABLE_COPY(DisassociateResourceResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
