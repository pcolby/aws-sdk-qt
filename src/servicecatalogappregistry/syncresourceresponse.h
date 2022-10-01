// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNCRESOURCERESPONSE_H
#define QTAWS_SYNCRESOURCERESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "syncresourcerequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class SyncResourceResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT SyncResourceResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    SyncResourceResponse(const SyncResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SyncResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SyncResourceResponse)
    Q_DISABLE_COPY(SyncResourceResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
